package com.in28minutes.springboot.myfirstwebapp.login;

import org.springframework.stereotype.Controller;
import org.springframework.ui.ModelMap;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestMethod;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.SessionAttributes;

@Controller
@SessionAttributes("name")
public class LoginController {
	
private AuthenticationService authenticationService;
	
	public LoginController(AuthenticationService authenticationService) {
		super();
		this.authenticationService = authenticationService;
	}
	
	
	
	
	
	
	@RequestMapping(value="login",method = RequestMethod.GET)
	public String tologin() {
		return "login";
	}
	
	//name1 will take the input in the form, then pass that in the key info that will be used in the return view named info
	
	@RequestMapping(value="login",method = RequestMethod.POST)
	public String gotowelcomepage(@RequestParam String name, @RequestParam String password,ModelMap model ) {
		if(authenticationService.authenticate(name, password)) {
			model.put("name", name);
			return "welcome";
		}
		model.put("errorMessage", "আপনি ভুল করেছেন ! পুনরায় চেক করুন!");
		return "login";
		
	}
	
//	public String tologin(@RequestParam String name, ModelMap model) {
//		model.put("name", name);
//		System.out.println("Request param is " + name); //NOT RECOMMENDED FOR PROD CODE
//		return "login";
//	}
}

