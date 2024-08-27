
// COS30008, Final Exam, 2023

#pragma once

#include <memory>
#include <cassert>
#include <algorithm>

template<typename T>
class TernaryTree
{
public:
    
    using Node = std::unique_ptr<TernaryTree>;

public:

    TernaryTree( const T& aKey = T{} ) noexcept;
    TernaryTree( T&& aKey ) noexcept;

    template<typename... Args>
    static Node makeNode( Args&&... args );

    const T& operator*() const noexcept;

    TernaryTree& operator[]( size_t aIndex ) const;

    void add( size_t aIndex, Node& aNode );
    Node remove( size_t aIndex );

    bool leaf() const noexcept;
    size_t height() const noexcept;

private:

    T fKey;
    Node fNodes[3];
};

