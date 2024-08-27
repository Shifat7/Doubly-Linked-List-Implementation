
// COS30008, Final Exam, 2023

#pragma once

#include <ostream>

class DSPString
{
private:

	// 3a
	

public:

	DSPString( const char* aContents = "\0" );

	~DSPString();

    // copy semantics
	DSPString( const DSPString& aOther );
	DSPString& operator=( const DSPString& aOther );

    // move semantics
	DSPString( DSPString&& aOther ) noexcept;
	DSPString& operator=( DSPString&& aOther ) noexcept;

	// 3b


	bool operator==( const DSPString& aOther ) const noexcept;

	friend std::ostream& operator<<( std::ostream& aOStream, 
		                             const DSPString& aObject );
};
