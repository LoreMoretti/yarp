/*
 * SPDX-FileCopyrightText: 2006-2021 Istituto Italiano di Tecnologia (IIT)
 * SPDX-License-Identifier: BSD-3-Clause
 */

// Autogenerated by Thrift Compiler (0.14.1-yarped)
//
// This is an automatically generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#include <yarp/dev/llm/Message.h>

namespace yarp::dev::llm {

// Constructor with field values
Message::Message(const std::string& sender,
                 const std::string& content) :
        WirePortable(),
        sender(sender),
        content(content)
{
}

// Read structure on a Wire
bool Message::read(yarp::os::idl::WireReader& reader)
{
    if (!read_sender(reader)) {
        return false;
    }
    if (!read_content(reader)) {
        return false;
    }
    if (reader.isError()) {
        return false;
    }
    return true;
}

// Read structure on a Connection
bool Message::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListHeader(2)) {
        return false;
    }
    if (!read(reader)) {
        return false;
    }
    return true;
}

// Write structure on a Wire
bool Message::write(const yarp::os::idl::WireWriter& writer) const
{
    if (!write_sender(writer)) {
        return false;
    }
    if (!write_content(writer)) {
        return false;
    }
    if (writer.isError()) {
        return false;
    }
    return true;
}

// Write structure on a Connection
bool Message::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(2)) {
        return false;
    }
    if (!write(writer)) {
        return false;
    }
    return true;
}

// Convert to a printable string
std::string Message::toString() const
{
    yarp::os::Bottle b;
    if (!yarp::os::Portable::copyPortable(*this, b)) {
        return {};
    }
    return b.toString();
}

// read sender field
bool Message::read_sender(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readString(sender)) {
        reader.fail();
        return false;
    }
    return true;
}

// write sender field
bool Message::write_sender(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeString(sender)) {
        return false;
    }
    return true;
}

// read (nested) sender field
bool Message::nested_read_sender(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readString(sender)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) sender field
bool Message::nested_write_sender(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeString(sender)) {
        return false;
    }
    return true;
}

// read content field
bool Message::read_content(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readString(content)) {
        reader.fail();
        return false;
    }
    return true;
}

// write content field
bool Message::write_content(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeString(content)) {
        return false;
    }
    return true;
}

// read (nested) content field
bool Message::nested_read_content(yarp::os::idl::WireReader& reader)
{
    if (reader.noMore()) {
        reader.fail();
        return false;
    }
    if (!reader.readString(content)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) content field
bool Message::nested_write_content(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeString(content)) {
        return false;
    }
    return true;
}

} // namespace yarp::dev::llm