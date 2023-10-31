
#include <crow.h>
#include <string>
using namespace std;
using namespace crow;

response handleHelloGetRequest() 
{
    string body = "Hello, world!";

    // Return the integer HTTP response code, and the response body as a string.
    return response(200, body);
}

int main()
{
    // Create a simple crow application.
    SimpleApp app; 

    // Define your endpoint and provide a function to handle the request.
    CROW_ROUTE(app, "/api/hello").methods(HTTPMethod::GET)(handleHelloGetRequest);

    // Set the port and run the app.
    app.port(18080).run();
}




