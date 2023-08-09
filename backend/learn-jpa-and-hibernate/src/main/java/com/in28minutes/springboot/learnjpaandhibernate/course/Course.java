package com.in28minutes.springboot.learnjpaandhibernate.course;

import jakarta.persistence.Column;
import jakarta.persistence.Entity;
import jakarta.persistence.Id;
//this will directly map our table with or course
@Entity
public class Course {
	@Id
	private long id;
	
	private String name;
//	@Column (name="student_name") ->we will use it if our table atttribute are different than our bean(name id author)
	private String author;
	
	
	public Course() {
		
	}
	
	 


	public Course(long id, String name, String author) {
		super();
		this.id = id;
		this.name = name;
		this.author = author;
	}




	public long getId() {
		return id;
	}


	public String getName() {
		return name;
	}


	public String getAuthor() {
		return author;
	}
	
	


	public void setId(long id) {
		this.id = id;
	}




	public void setName(String name) {
		this.name = name;
	}




	public void setAuthor(String author) {
		this.author = author;
	}




	@Override
	public String toString() {
		return "Course [id=" + id + ", name=" + name + ", author=" + author + "]";
	}
	
	
}
