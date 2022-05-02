package RequestServlet;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import java.io.IOException;

public class Servlet1 extends HttpServlet {
    @Override
    protected void doGet(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        String username = req.getParameter("username");
        System.out.println("servlet1请求的名字是 " + username);
        req.setAttribute("key","Servlet1的章");
        //获取去到Servlet2的路径
        RequestDispatcher requestDispatcher = req.getRequestDispatcher("/servlet2");
        //进入到Servlet2
        requestDispatcher.forward(req,resp);
//        req.getRequestDispatcher("/servlet2").forward(req,resp);
    }
}
