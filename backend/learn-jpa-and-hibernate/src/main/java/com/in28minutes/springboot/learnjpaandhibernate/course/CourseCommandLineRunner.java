package com.in28minutes.springboot.learnjpaandhibernate.course;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.boot.CommandLineRunner;
import org.springframework.data.repository.support.Repositories;
import org.springframework.stereotype.Component;

import com.in28minutes.springboot.learnjpaandhibernate.course.Course;
import com.in28minutes.springboot.learnjpaandhibernate.course.jdbc.CourseJdbcRepository;
import com.in28minutes.springboot.learnjpaandhibernate.course.jpa.CourseJpaRepository;
import com.in28minutes.springboot.learnjpaandhibernate.course.springdatajpa.CourseSpringDataJpaRepository;

@Component
public class CourseCommandLineRunner implements CommandLineRunner {

//	@Autowired
//	private CourseJdbcRepository repository;
//	@Autowired
//	private CourseJpaRepository repository;

	@Autowired
	private CourseSpringDataJpaRepository repository;

	@Override
	public void run(String... args) throws Exception {
//		 repository.insert(new Course(1,"learn aws form cl jpa","marua_cdmLine"));
//		 repository.insert(new Course(2,"learn devops form jpa","marua_cdmLine"));
//		 repository.insert(new Course(3,"learn react form jpa","marua_cdmLine"));

		// for springdataJpa we will use save instead of insert
		repository.save(new Course(1, "learn aws form cl Springjpa", "marua_cdmLine"));
		repository.save(new Course(2, "learn devops form springjpa", "marua_cdmLine"));
		repository.save(new Course(3, "learn react form springjpa", "maruadon2"));
		repository.save(new Course(3, "learn vueJs form springjpa", "maruadon2"));
		// 3l for long-> for spring datajpa
//		repository.deleteById(3l);
		System.out.println(repository.findById(1l)); // this need setter method in course.java
		System.out.println(repository.findById(3l));// this need setter method in course.java

		System.out.println(repository.findAll());
		System.out.println(repository.count());

		// run our custom query
		System.out.println(repository.findByAuthor("marua_cdmLine"));
		System.out.println(repository.findByAuthor(""));

		System.out.println(repository.findByName("learn react form springjpa"));
		System.out.println(repository.findByName("learn vueJs form springjpa"));

	}

}
