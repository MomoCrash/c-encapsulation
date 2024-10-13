#include <iostream>
#include <vector>
#include "chatbot.h"

ChatBot::ChatBot(std::vector<std::string>* defaultMemory, int age) {
	m_age = age;
	m_memory = defaultMemory;
}

void ChatBot::LoadMemory() {
	for (int i = 0; i < (*m_memory).size(); i++)
	{
		


	}
}

std::string ChatBot::GetReponse(std::string* string) {
	
	return "SALUT";

}