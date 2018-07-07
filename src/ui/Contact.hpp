/************************************************************
 *
 *                 OPEN TRANSACTIONS
 *
 *       Financial Cryptography and Digital Cash
 *       Library, Protocol, API, Server, CLI, GUI
 *
 *       -- Anonymous Numbered Accounts.
 *       -- Untraceable Digital Cash.
 *       -- Triple-Signed Receipts.
 *       -- Cheques, Vouchers, Transfers, Inboxes.
 *       -- Basket Currencies, Markets, Payment Plans.
 *       -- Signed, XML, Ricardian-style Contracts.
 *       -- Scripted smart contracts.
 *
 *  EMAIL:
 *  fellowtraveler@opentransactions.org
 *
 *  WEBSITE:
 *  http://www.opentransactions.org/
 *
 *  -----------------------------------------------------
 *
 *   LICENSE:
 *   This Source Code Form is subject to the terms of the
 *   Mozilla Public License, v. 2.0. If a copy of the MPL
 *   was not distributed with this file, You can obtain one
 *   at http://mozilla.org/MPL/2.0/.
 *
 *   DISCLAIMER:
 *   This program is distributed in the hope that it will
 *   be useful, but WITHOUT ANY WARRANTY; without even the
 *   implied warranty of MERCHANTABILITY or FITNESS FOR A
 *   PARTICULAR PURPOSE.  See the Mozilla Public License
 *   for more details.
 *
 ************************************************************/

#ifndef OPENTXS_UI_CONTACT_IMPLEMENTATION_HPP
#define OPENTXS_UI_CONTACT_IMPLEMENTATION_HPP

#include "Internal.hpp"

namespace opentxs::ui::implementation
{
using ContactType = List<
    ContactExternalInterface,
    ContactInternalInterface,
    ContactRowID,
    ContactRowInterface,
    ContactRowBlank,
    ContactSortKey>;

class Contact : virtual public ContactType
{
public:
    std::string ContactID() const override;
    std::string DisplayName() const override;
    std::string PaymentCode() const override;

    ~Contact() = default;

private:
    friend Factory;

    static const std::set<proto::ContactSectionName> allowed_types_;
    static const std::map<proto::ContactSectionName, int> sort_keys_;
    static const ListenerDefinitions listeners_;

    std::string name_;
    std::string payment_code_;

    static int sort_key(const proto::ContactSectionName type);
    static bool check_type(const proto::ContactSectionName type);
    static const opentxs::ContactSection& recover(const void* input);

    void construct_row(
        const ContactRowID& id,
        const ContactSortKey& index,
        const CustomData& custom) const override;

    bool last(const ContactRowID& id) const override
    {
        return ContactType::last(id);
    }
    void update(ContactRowInterface& row, const CustomData& custom)
        const override;

    void process_contact(const opentxs::Contact& contact);
    void process_contact(const network::zeromq::Message& message);
    void startup();

    Contact(
        const network::zeromq::Context& zmq,
        const network::zeromq::PublishSocket& publisher,
        const api::ContactManager& contact,
        const Identifier& nymID);
    Contact() = delete;
    Contact(const Contact&) = delete;
    Contact(Contact&&) = delete;
    Contact& operator=(const Contact&) = delete;
    Contact& operator=(Contact&&) = delete;
};
}  // namespace opentxs::ui::implementation
#endif  // OPENTXS_UI_CONTACT_IMPLEMENTATION_HPP