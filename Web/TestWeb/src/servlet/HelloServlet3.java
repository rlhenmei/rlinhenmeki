package servlet;

import javax.servlet.*;
import javax.servlet.http.*;
import java.io.IOException;

public class HelloServlet3 extends HttpServlet {
    @Override
    protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
        System.out.println("hello3的get方法");
        System.out.println(getServletConfig().getServletContext().getInitParameter("username"));
        System.out.println(getServletConfig().getServletContext().getInitParameter("work"));
    }

    @Override
    protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
        System.out.println("hello3的post方法");
    }
}
