package com.in28minutes.springboot.learnspringboot;

import java.util.Arrays;
import java.util.List;

import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

@RestController
public class CourseController {
	@RequestMapping("/cources")
	public List<Course> retrieveAllCourses(){
		return Arrays.asList(
			new Course(1, "Learn AWS", "in28Minutes"),
			new Course(2, "Learn DevOps", "in28Minutes"),
			new Course(3, "Learn Azure", "in28Minutes"),
			new Course(4, "Learn NodeJs", "in28Minutes"),
			new Course(5, "Learn ReactJs", "in28Minutes")
				);
	}
	
}
