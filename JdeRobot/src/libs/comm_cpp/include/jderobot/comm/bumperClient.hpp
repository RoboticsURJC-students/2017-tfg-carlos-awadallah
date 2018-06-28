/*
 *  Copyright (C) 1997-2016 JDE Developers Team
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see http://www.gnu.org/licenses/.
 *  Authors :
 *       Aitor Martinez Fernandez <aitor.martinez.fernandez@gmail.com>
 */

#ifndef JDEROBOTCOMM_BUMPERCLIENT_H
#define JDEROBOTCOMM_BUMPERCLIENT_H

#include <jderobot/types/bumperData.h>
#include <Ice/Communicator.h>
#include <jderobot/comm/tools.hpp>
#include <jderobot/comm/communicator.hpp>
#include <jderobot/comm/interfaces/bumperClient.hpp>
#include <jderobot/comm/ice/bumperIceClient.hpp>
#ifdef JDERROS
#include <jderobot/comm/ros/listenerBumper.hpp>
#endif




namespace Comm {

	/**
	 * @brief make a BumperClient using propierties
	 *
	 *
	 * @param communicator that contains properties
	 * @param prefix of client Propierties (example: "carViz.Bumper")
	 * 
	 *
	 * @return null if propierties are wrong
	 */
	BumperClient* getBumperClient(Comm::Communicator* jdrc, std::string prefix);


} //NS

#endif // JDEROBOTCOMM_BUMPERCLIENT_H