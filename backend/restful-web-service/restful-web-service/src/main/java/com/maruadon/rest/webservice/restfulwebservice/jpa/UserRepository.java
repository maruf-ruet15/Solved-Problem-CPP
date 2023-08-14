package com.maruadon.rest.webservice.restfulwebservice.jpa;

import org.springframework.data.jpa.repository.JpaRepository;

import com.maruadon.rest.webservice.restfulwebservice.user.User;

public interface UserRepository extends JpaRepository<User, Integer>{

}
