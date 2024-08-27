
// COS30008, Final Exam, 2023

#include "DSPString.h"

#include <cassert>
#include <algorithm>

DSPString::DSPString( const char* aContents )
{
	size_t lSize = 0;

	while ( aContents[lSize] )
	{
		lSize++;
	}

	fContents = new char[++lSize];

	for ( size_t i = 0; i < lSize; i++ )
	{
		fContents[i] = aContents[i];
	}
}

DSPString::~DSPString()
{
	// 3C

}

DSPString::DSPString( const DSPString& aOther ) :
	DSPString( aOther.fContents )
{}

DSPString& DSPString::operator=( const DSPString& aOther )
{
	// 3D

}

DSPString::DSPString( DSPString&& aOther ) noexcept :
	DSPString( "\0" )
{
	// 3E

}

DSPString& DSPString::operator=( DSPString&& aOther ) noexcept
{
	// 3F

}

size_t DSPString::size() const noexcept
{
	// 3G

}

char DSPString::operator[]( size_t aIndex ) const noexcept
{
	// 3H

}

bool DSPString::operator==( const DSPString& aOther ) const noexcept
{
	if ( size() == aOther.size() )
	{
		for ( size_t i = 0; i < size(); i++ )
		{
			if ( fContents[i] != aOther.fContents[i] )
			{
				return false;
			}
		}

		return true;
	}

	return false;
}

std::ostream& operator<<( std::ostream& aOStream, const DSPString& aObject )
{
	// 3I
	
}
