package com.in28minutes.springboot.myfirstwebapp.todo;

import java.time.LocalDate;
import java.util.List;

import org.springframework.stereotype.Controller;
import org.springframework.ui.ModelMap;
import org.springframework.validation.BindingResult;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestMethod;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.SessionAttributes;

import jakarta.validation.Valid;

@Controller
@SessionAttributes("name")
public class TodoController {
	
	public TodoService todoService;
	public TodoController(TodoService todoService) {
		super();
		this.todoService = todoService;
	}




	@RequestMapping("list-todos")
	public String listAllTodos(ModelMap model) {
		List<Todo> todosControl = todoService.findByUsername();
		model.addAttribute("todos",todosControl);
		return "listTodos";
	}
	//two way binding GET POST
	@RequestMapping(value="add-todo",method = RequestMethod.GET)
	public String ShowNewTodoPage(ModelMap model) {
		String username = (String)model.get("name");
		Todo todo = new Todo(0,username, "",LocalDate.now().plusYears(1),false);
		model.put("todo", todo);
		return "todo";
	}
	@RequestMapping(value="add-todo",method = RequestMethod.POST)
	public String addNewTodo(ModelMap model,@Valid Todo todo,BindingResult result) {
		if(result.hasErrors()) {
			return "todo"; //means remain in that page again
			
		}
		String username = (String)model.get("name");	
		todoService.addTodo(username, todo.getDescription(), todo.getTargetDate(), false);
		return "redirect:list-todos";
	}
	
	@RequestMapping("delete-todo")
	public String deleteTodo(@RequestParam int id) {
		//Delete todo
		
		todoService.deleteById(id);
		return "redirect:list-todos";
		
	}
	
	@RequestMapping("update-todo")
	public String showUpdateTodoPage(@RequestParam int id,ModelMap model) {
		//upadateShow page todo
		Todo todo = todoService.findById(id);
		model.addAttribute("todo",todo);
		return "todo";
		
	}
	@RequestMapping(value="update-todo",method = RequestMethod.POST)
	public String updateNewTodo(ModelMap model,@Valid Todo todo,BindingResult result) {
		if(result.hasErrors()) {
			return "todo"; //means remain in that page again
			
		}
		String username = (String)model.get("name");
		todo.setUsername(username);
		todoService.updateTodo(todo);
		return "redirect:list-todos";
	}
}
