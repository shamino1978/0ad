// (included from precompiled.h)

#include "lib/external_libraries/suppress_boost_warnings.h"

// Boost
// .. if this package isn't going to be statically linked, we're better off
// using Boost via DLL. (otherwise, we would have to ensure the exact same
// compiler is used, which is a pain because MSC8, MSC9 and ICC 10 are in use)
#ifndef LIB_STATIC_LINK
# define BOOST_ALL_DYN_LINK
#endif

// the following boost libraries have been included in TR1 and are
// thus deemed usable:
#define BOOST_FILESYSTEM_VERSION 2
#include <boost/filesystem.hpp>
namespace fs = boost::filesystem;
#include <boost/shared_ptr.hpp>
using boost::shared_ptr;

// (these ones are used more rarely, so we don't enable them in minimal configurations)
#if !MINIMAL_PCH
#include <boost/array.hpp>
using boost::array;

#include <boost/mem_fn.hpp>
using boost::mem_fn;

#include <boost/function.hpp>
using boost::function;

#include <boost/bind.hpp>
using boost::bind;
#endif // !MINIMAL_PCH
