/*
 * conference-event-p.h
 * Copyright (C) 2010-2017 Belledonne Communications SARL
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

#ifndef _CONFERENCE_EVENT_P_H_
#define _CONFERENCE_EVENT_P_H_

#include "chat/chat-room/chat-room-id.h"
#include "conference-event.h"
#include "event-log/event-log-p.h"

// =============================================================================

LINPHONE_BEGIN_NAMESPACE

class ConferenceEventPrivate : public EventLogPrivate {
private:
	ChatRoomId chatRoomId;

	L_DECLARE_PUBLIC(ConferenceEvent);
};

LINPHONE_END_NAMESPACE

#endif // ifndef _CONFERENCE_EVENT_P_H_
