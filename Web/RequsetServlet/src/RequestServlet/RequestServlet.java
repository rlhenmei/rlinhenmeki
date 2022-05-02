package RequestServlet;


import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import java.io.IOException;

public class RequestServlet extends HttpServlet {
    @Override
    protected void doGet(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        System.out.println("请求的的资源路径URI "+req.getRequestURI());
        System.out.println("请求的绝对路径URL "+req.getRequestURL());
        System.out.println("请求的客户端IP地址" + req.getRemoteHost());
        System.out.println("请求头是 " + req.getHeader("User-Agent"));
    }
}
