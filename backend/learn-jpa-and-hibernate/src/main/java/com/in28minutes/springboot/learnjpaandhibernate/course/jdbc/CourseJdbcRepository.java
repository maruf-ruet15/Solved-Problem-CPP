package com.in28minutes.springboot.learnjpaandhibernate.course.jdbc;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.jdbc.core.BeanPropertyRowMapper;
import org.springframework.jdbc.core.JdbcTemplate;
import org.springframework.stereotype.Repository;

import com.in28minutes.springboot.learnjpaandhibernate.course.Course;

@Repository
public class CourseJdbcRepository {
	
	@Autowired
	private JdbcTemplate springJdbcTemplate;
	
	private static String INSERT_QUERY = 
			
			"""
				insert into course (id, name, author)
				values(?,?,?);
	
			""";

	private static String DELETE_QUERY = 
			
			"""
				delete from course
				where id = ?
	
			""";

	private static String SELECT_QUERY = 
			
			"""
				select * from course
				where id = ?
	
			""";
	
	public void insert(Course course) {
		springJdbcTemplate.update(INSERT_QUERY, 
				course.getId(), course.getName(), course.getAuthor());
	}
	
	
	public void deleteById(long id) {
		springJdbcTemplate.update(DELETE_QUERY,id);
	}
	
	public Course findById(long id) {
		//here query for object has 3 argument,
		//middle one is the property that fetch the row form h2 database and sent to our course class using its setter method
		//here setter method map h2 db -> our console by println
		//ResultSet -> Bean => Row Mapper => 
		return springJdbcTemplate.queryForObject(SELECT_QUERY,
				new BeanPropertyRowMapper<>(Course.class), id);
		
	}
	
	
//	******** before using ? and getter to get query*****
	
//	public void insert() {
//	springJdbcTemplate.update(INSERT_QUERY);
//			
//}

}