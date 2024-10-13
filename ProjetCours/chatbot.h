#ifndef TEST_H__
#define TEST_H__

class ChatBot
{

private:
	int m_age;
	int m_offuscated = false;

	std::vector<std::string>* m_memory;

public:
	ChatBot(std::vector<std::string>* defaultMemory, int age);
	void LoadMemory();
	std::string GetReponse(std::string* string);

};

#endif // !TEST_H__
