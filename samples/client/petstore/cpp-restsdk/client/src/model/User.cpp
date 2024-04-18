/**
 * OpenAPI Petstore
 * This is a sample server Petstore server. For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * The version of the OpenAPI document: 1.0.0
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.6.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "CppRestPetstoreClient/model/User.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



User::User()
{
    m_Id = 0L;
    m_IdIsSet = false;
    m_Username = utility::conversions::to_string_t("");
    m_UsernameIsSet = false;
    m_FirstName = utility::conversions::to_string_t("");
    m_FirstNameIsSet = false;
    m_LastName = utility::conversions::to_string_t("");
    m_LastNameIsSet = false;
    m_Email = utility::conversions::to_string_t("");
    m_EmailIsSet = false;
    m_Password = utility::conversions::to_string_t("");
    m_PasswordIsSet = false;
    m_Phone = utility::conversions::to_string_t("");
    m_PhoneIsSet = false;
    m_UserStatus = 0;
    m_UserStatusIsSet = false;
}

User::~User()
{
}

void User::validate()
{
    // TODO: implement validation
}

web::json::value User::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_Id);
    }
    if(m_UsernameIsSet)
    {
        val[utility::conversions::to_string_t(U("username"))] = ModelBase::toJson(m_Username);
    }
    if(m_FirstNameIsSet)
    {
        val[utility::conversions::to_string_t(U("firstName"))] = ModelBase::toJson(m_FirstName);
    }
    if(m_LastNameIsSet)
    {
        val[utility::conversions::to_string_t(U("lastName"))] = ModelBase::toJson(m_LastName);
    }
    if(m_EmailIsSet)
    {
        val[utility::conversions::to_string_t(U("email"))] = ModelBase::toJson(m_Email);
    }
    if(m_PasswordIsSet)
    {
        val[utility::conversions::to_string_t(U("password"))] = ModelBase::toJson(m_Password);
    }
    if(m_PhoneIsSet)
    {
        val[utility::conversions::to_string_t(U("phone"))] = ModelBase::toJson(m_Phone);
    }
    if(m_UserStatusIsSet)
    {
        val[utility::conversions::to_string_t(U("userStatus"))] = ModelBase::toJson(m_UserStatus);
    }

    return val;
}

bool User::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("id")));
        if(!fieldValue.is_null())
        {
            int64_t refVal_setId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setId);
            setId(refVal_setId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("username"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("username")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setUsername;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUsername);
            setUsername(refVal_setUsername);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("firstName"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("firstName")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setFirstName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setFirstName);
            setFirstName(refVal_setFirstName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("lastName"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("lastName")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setLastName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setLastName);
            setLastName(refVal_setLastName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("email"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("email")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setEmail;
            ok &= ModelBase::fromJson(fieldValue, refVal_setEmail);
            setEmail(refVal_setEmail);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("password"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("password")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setPassword;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPassword);
            setPassword(refVal_setPassword);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("phone"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("phone")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setPhone;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPhone);
            setPhone(refVal_setPhone);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("userStatus"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("userStatus")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setUserStatus;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUserStatus);
            setUserStatus(refVal_setUserStatus);
        }
    }
    return ok;
}

void User::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("id")), m_Id));
    }
    if(m_UsernameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("username")), m_Username));
    }
    if(m_FirstNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("firstName")), m_FirstName));
    }
    if(m_LastNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("lastName")), m_LastName));
    }
    if(m_EmailIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("email")), m_Email));
    }
    if(m_PasswordIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("password")), m_Password));
    }
    if(m_PhoneIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("phone")), m_Phone));
    }
    if(m_UserStatusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("userStatus")), m_UserStatus));
    }
}

bool User::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("id"))))
    {
        int64_t refVal_setId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("id"))), refVal_setId );
        setId(refVal_setId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("username"))))
    {
        utility::string_t refVal_setUsername;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("username"))), refVal_setUsername );
        setUsername(refVal_setUsername);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("firstName"))))
    {
        utility::string_t refVal_setFirstName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("firstName"))), refVal_setFirstName );
        setFirstName(refVal_setFirstName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("lastName"))))
    {
        utility::string_t refVal_setLastName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("lastName"))), refVal_setLastName );
        setLastName(refVal_setLastName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("email"))))
    {
        utility::string_t refVal_setEmail;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("email"))), refVal_setEmail );
        setEmail(refVal_setEmail);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("password"))))
    {
        utility::string_t refVal_setPassword;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("password"))), refVal_setPassword );
        setPassword(refVal_setPassword);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("phone"))))
    {
        utility::string_t refVal_setPhone;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("phone"))), refVal_setPhone );
        setPhone(refVal_setPhone);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("userStatus"))))
    {
        int32_t refVal_setUserStatus;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("userStatus"))), refVal_setUserStatus );
        setUserStatus(refVal_setUserStatus);
    }
    return ok;
}

int64_t User::getId() const
{
    return m_Id;
}

void User::setId(int64_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool User::idIsSet() const
{
    return m_IdIsSet;
}

void User::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t User::getUsername() const
{
    return m_Username;
}

void User::setUsername(const utility::string_t& value)
{
    m_Username = value;
    m_UsernameIsSet = true;
}

bool User::usernameIsSet() const
{
    return m_UsernameIsSet;
}

void User::unsetUsername()
{
    m_UsernameIsSet = false;
}
utility::string_t User::getFirstName() const
{
    return m_FirstName;
}

void User::setFirstName(const utility::string_t& value)
{
    m_FirstName = value;
    m_FirstNameIsSet = true;
}

bool User::firstNameIsSet() const
{
    return m_FirstNameIsSet;
}

void User::unsetFirstName()
{
    m_FirstNameIsSet = false;
}
utility::string_t User::getLastName() const
{
    return m_LastName;
}

void User::setLastName(const utility::string_t& value)
{
    m_LastName = value;
    m_LastNameIsSet = true;
}

bool User::lastNameIsSet() const
{
    return m_LastNameIsSet;
}

void User::unsetLastName()
{
    m_LastNameIsSet = false;
}
utility::string_t User::getEmail() const
{
    return m_Email;
}

void User::setEmail(const utility::string_t& value)
{
    m_Email = value;
    m_EmailIsSet = true;
}

bool User::emailIsSet() const
{
    return m_EmailIsSet;
}

void User::unsetEmail()
{
    m_EmailIsSet = false;
}
utility::string_t User::getPassword() const
{
    return m_Password;
}

void User::setPassword(const utility::string_t& value)
{
    m_Password = value;
    m_PasswordIsSet = true;
}

bool User::passwordIsSet() const
{
    return m_PasswordIsSet;
}

void User::unsetPassword()
{
    m_PasswordIsSet = false;
}
utility::string_t User::getPhone() const
{
    return m_Phone;
}

void User::setPhone(const utility::string_t& value)
{
    m_Phone = value;
    m_PhoneIsSet = true;
}

bool User::phoneIsSet() const
{
    return m_PhoneIsSet;
}

void User::unsetPhone()
{
    m_PhoneIsSet = false;
}
int32_t User::getUserStatus() const
{
    return m_UserStatus;
}

void User::setUserStatus(int32_t value)
{
    m_UserStatus = value;
    m_UserStatusIsSet = true;
}

bool User::userStatusIsSet() const
{
    return m_UserStatusIsSet;
}

void User::unsetUserStatus()
{
    m_UserStatusIsSet = false;
}
}
}
}
}


