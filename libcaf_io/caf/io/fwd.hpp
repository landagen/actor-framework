/******************************************************************************
 *                       ____    _    _____                                   *
 *                      / ___|  / \  |  ___|    C++                           *
 *                     | |     / _ \ | |_       Actor                         *
 *                     | |___ / ___ \|  _|      Framework                     *
 *                      \____/_/   \_|_|                                      *
 *                                                                            *
 * Copyright (C) 2011 - 2017                                                  *
 * Dominik Charousset <dominik.charousset (at) haw-hamburg.de>                *
 *                                                                            *
 * Distributed under the terms and conditions of the BSD 3-Clause License or  *
 * (at your option) under the terms and conditions of the Boost Software      *
 * License 1.0. See accompanying files LICENSE and LICENSE_ALTERNATIVE.       *
 *                                                                            *
 * If you did not receive a copy of the license files, see                    *
 * http://opensource.org/licenses/BSD-3-Clause and                            *
 * http://www.boost.org/LICENSE_1_0.txt.                                      *
 ******************************************************************************/

#ifndef CAF_IO_FWD_HPP
#define CAF_IO_FWD_HPP

namespace caf {

// -- templates from the parent namespace necessary for defining aliases -------

template <class> class intrusive_ptr;

namespace io {

// -- variadic templates -------------------------------------------------------

template <class... Sigs>
class typed_broker;

// -- classes ------------------------------------------------------------------

class scribe;
class broker;
class doorman;
class middleman;
class basp_broker;
class receive_policy;
class abstract_broker;
class datagram_servant;

// -- aliases ------------------------------------------------------------------

using scribe_ptr = intrusive_ptr<scribe>;
using doorman_ptr = intrusive_ptr<doorman>;
using datagram_servant_ptr = intrusive_ptr<datagram_servant>;

// -- nested namespaces --------------------------------------------------------

namespace network {

class multiplexer;

} // namespace network

} // namespace io
} // namespace caf

#endif // CAF_IO_FWD_HPP
