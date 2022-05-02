package servlet;

import javax.servlet.*;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import java.io.IOException;

public class HelloServlet implements Servlet {
    public HelloServlet() {//只会访问一次
        System.out.println("构造器方法");
    }

    @Override
    public void init(ServletConfig servletConfig) throws ServletException {//只会访问一次
        System.out.println("初始化方法");
        System.out.println("HelloServlet程序的别名是" + servletConfig.getServletName());
        System.out.println("名字是" + servletConfig.getInitParameter("username"));
    }

    @Override
    public ServletConfig getServletConfig() {
        return null;
    }

    @Override
    public void service(ServletRequest servletRequest, ServletResponse servletResponse) throws ServletException, IOException {
        HttpServletRequest httpServletRequest = (HttpServletRequest) servletRequest;
        String method = httpServletRequest.getMethod();
        if(method.equals("GET")){
            System.out.println("GET方法被访问到了");
        }else if (method.equals("POST")){
            System.out.println("POST方法被访问到了");
        }
    }

    @Override
    public String getServletInfo() {
        return null;
    }

    @Override
    public void destroy() {
        System.out.println("销毁方法");
    }


}
