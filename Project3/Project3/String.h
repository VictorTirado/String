#ifndef _STRING_H
#define _STRING_H


class String {
public:
	char* info = nullptr;

	//Constructors
	String() {};
	String(const char* text) {
		this->info = (char*)text;
	}
	String(const String& text) :info(text.info) {};
	
	
	//Operators
	String operator = (const String& text)
	{
		info = text.info;
		return(*this);
	}
	
	bool operator ==(const String& text)const
	{
		return (info == text.info);
	}

};

#endif
