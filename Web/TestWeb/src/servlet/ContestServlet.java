package servlet;

import javax.servlet.*;
import javax.servlet.http.*;
import java.io.IOException;

public class ContestServlet extends HttpServlet {
    @Override
    protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
        //获取上下文参数
        ServletContext context = getServletConfig().getServletContext();
        System.out.println(context.getInitParameter("username"));
        System.out.println(context.getInitParameter("work"));
        //获取工程的路径
        System.out.println(context.getContextPath());
        //获取工程在磁盘上的绝对路径
        /*
         '/'表示映射到当前工程的web目录
         */
        System.out.println(context.getRealPath("/"));
    }

    @Override
    protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {

    }
}
