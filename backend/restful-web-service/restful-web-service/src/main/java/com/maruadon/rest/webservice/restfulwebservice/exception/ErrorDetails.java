package com.maruadon.rest.webservice.restfulwebservice.exception;
import java.time.LocalDate;

public class ErrorDetails {

	private LocalDate timestamp;
	private String message;
	private String details;

	public ErrorDetails(LocalDate localDate, String message, String details) {
		super();
		this.timestamp = localDate;
		this.message = message;
		this.details = details;
	}

	public LocalDate getTimestamp() {
		return timestamp;
	}

	public String getMessage() {
		return message;
	}

	public String getDetails() {
		return details;
	}
	

}
