/* vim: set expandtab ts=4 sw=4: */
/*
 * You may redistribute this program and/or modify it under the terms of
 * the GNU General Public License as published by the Free Software Foundation,
 * either version 3 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef Angel_H
#define Angel_H

#include "benc/String.h"
#include "memory/Allocator.h"
#include "util/log/Log.h"
#include "interface/Interface.h"

#include <event2/event.h>

#define Angel_MAX_CONNECTIONS 64
#define Angel_INITIAL_CONF_BUFF_SIZE 1024

void Angel_start(String* pass,
                 evutil_socket_t tcpSocket,
                 struct Interface* coreIface,
                 struct event_base* eventBase,
                 struct Log* logger,
                 struct Allocator* alloc);

#endif
