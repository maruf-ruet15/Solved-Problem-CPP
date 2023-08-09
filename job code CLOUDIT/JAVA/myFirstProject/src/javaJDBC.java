import java.sql.*;  
class javaJDBC{  
public static void main(String args[]){  
try{  
Class.forName("com.mysql.jdbc.Driver"); 
// The forName() method of Class class is used to register the driver class. This method is used to dynamically load the driver class. 
Connection con=DriverManager.getConnection(  
"jdbc:mysql://http://localhost/phpmyadmin/index.php?route=/database/structure&db=sonoo","root","root"); 

// The getConnection() method of DriverManager class is used to establish connection with the database.
//here sonoo is database name, root is username and password  
Statement stmt=con.createStatement(); 
// the createStatement() method of Connection interface is used to create statement. The object of statement is responsible to execute queries with the database.

ResultSet rs=stmt.executeQuery("select * from emp");  
while(rs.next())  
System.out.println(rs.getInt(1)+"  "+rs.getString(2)+"  "+rs.getString(3));  
con.close();  
}catch(Exception e){ System.out.println(e);}  
}  
}