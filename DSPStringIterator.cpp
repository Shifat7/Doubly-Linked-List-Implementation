
// COS30008, Final Exam, 2023

#include "DSPStringIterator.h"

DSPStringIterator::DSPStringIterator( const DSPString& aCollection ) :
	fCollection( std::make_shared<DSPString>( aCollection ) ),
	fIndex( 0 )
{}

char DSPStringIterator::operator*() const noexcept
{
	// 4A
}

DSPStringIterator& DSPStringIterator::operator++() noexcept
{
	// 4B
}

DSPStringIterator DSPStringIterator::operator++( int ) noexcept
{
	DSPStringIterator old = *this;

	++(*this);

	return old;
}

DSPStringIterator& DSPStringIterator::operator--() noexcept
{
	// 4C
}

DSPStringIterator DSPStringIterator::operator--( int ) noexcept
{
	DSPStringIterator old = *this;

	--(*this);

	return old;
}

bool DSPStringIterator::operator==( const DSPStringIterator& aOther ) const noexcept
{
	// 4D
}

bool DSPStringIterator::operator!=( const DSPStringIterator& aOther ) const noexcept
{
	return !(*this == aOther);
}

DSPStringIterator  DSPStringIterator::begin() const noexcept
{
	// 4E
}

DSPStringIterator DSPStringIterator::end() const noexcept
{
	// 4F
}

DSPStringIterator DSPStringIterator::rbegin() const noexcept
{
	// 4G
}

DSPStringIterator DSPStringIterator::rend() const noexcept
{
	// 4H
}
