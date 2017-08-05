#include <service>
#include <cstdio>

void Service::start(const std::string& args)
{
  printf("Hello world - OS included!\n");
  printf("Args = %s\n", args.c_str());
}
