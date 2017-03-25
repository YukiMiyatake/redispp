#include<iostream>
#include<boost/asio.hpp>
#include<boost/function.hpp>



int main(int argc, char* argv[])
{
	try
	{
		boost::asio::io_service io_service;

		// work
		auto work(std::make_shared<boost::asio::io_service::work>(io_service));



		io_service.run();

	}
	catch (std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << "\n";
	}

	return 0;
}


