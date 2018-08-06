// Copyright (c) 2018 The Open-Transactions developers
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at http://mozilla.org/MPL/2.0/.

#pragma once

#include "Internal.hpp"

namespace opentxs::ui::implementation
{
using MessagableListList = List<
    MessagableExternalInterface,
    MessagableInternalInterface,
    MessagableListRowID,
    MessagableListRowInterface,
    MessagableListRowInternal,
    MessagableListRowBlank,
    MessagableListSortKey>;

class MessagableList final : public MessagableListList
{
public:
    const Identifier& ID() const override;

    ~MessagableList() = default;

private:
    friend opentxs::Factory;

    static const ListenerDefinitions listeners_;

    const api::client::Sync& sync_;
    const OTIdentifier owner_contact_id_;

    void construct_row(
        const MessagableListRowID& id,
        const MessagableListSortKey& index,
        const CustomData& custom) const override;
    bool last(const MessagableListRowID& id) const override
    {
        return MessagableListList::last(id);
    }

    void process_contact(
        const MessagableListRowID& id,
        const MessagableListSortKey& key);
    void process_contact(const network::zeromq::Message& message);
    void process_nym(const network::zeromq::Message& message);
    void startup();

    MessagableList(
        const network::zeromq::Context& zmq,
        const network::zeromq::PublishSocket& publisher,
        const api::client::Contacts& contact,
        const api::client::Sync& sync,
        const Identifier& nymID);
    MessagableList() = delete;
    MessagableList(const MessagableList&) = delete;
    MessagableList(MessagableList&&) = delete;
    MessagableList& operator=(const MessagableList&) = delete;
    MessagableList& operator=(MessagableList&&) = delete;
};
}  // namespace opentxs::ui::implementation
