package RequestServlet;

import javax.servlet.*;
import javax.servlet.http.*;
import java.io.IOException;
import java.io.PrintWriter;

public class ResponceIOServlet extends HttpServlet {
    @Override
    protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
//        response.setCharacterEncoding("UTF-8");
//        response.setHeader("Content-Type","text/html;charset=UTF-8");
        response.setContentType("text/html;charset=UTF-8");//会同时将客户端和服务端的编码都设置为UTF-8
        System.out.println(response.getCharacterEncoding());//查看当前服务器端的字符编码
        PrintWriter writer = response.getWriter();
        writer.write("张三哈哈哈");
    }

    @Override
    protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {

    }
}
