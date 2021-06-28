using Microsoft.AspNetCore.Mvc;

namespace WebApplicationDotNetCore.Controllers
{
    public class RSPEC5146OpenRedirectNoncompliantController : Controller
    {
        public IActionResult Index()
        {
            return View();
        }

        private readonly string[] whiteList = { "https://www.sonarsource.com" };

        public IActionResult RedirectMe(string url)
        {
            return Redirect(url);
        }
    }
}