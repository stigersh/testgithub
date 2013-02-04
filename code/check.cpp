template< 
    class CharT, 
    class Traits = std::char_traits<CharT>, 
    class Allocator = std::allocator<CharT>
> class basic_string;

template< class CharT, class Traits, class Alloc >
    basic_string<CharT,Traits,Alloc>
        operator+( const basic_string<CharT,Traits,Alloc>& lhs,
                   const CharT* rhs );