package RequestServlet;

import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import java.io.IOException;

public class Response1 extends HttpServlet {
    @Override
    protected void doGet(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        System.out.println("该地址已换response2");
//        resp.setStatus(302);
//        resp.setHeader("Location","http://localhost:8080/RequsetServlet/response2");
        resp.sendRedirect("https://www.youtube.com");//sendRedirect会自动设置响应码为302
        //可以访问工程外的资源
//        resp.setHeader("Location","https://www.youtube.com/");
    }
}
