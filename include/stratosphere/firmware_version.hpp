/*
 * Copyright (c) 2018 Atmosphère-NX
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
 
#pragma once

enum FirmwareVersion : u32 {
    FirmwareVersion_Min = 0,
    FirmwareVersion_100 = FirmwareVersion_Min,
    FirmwareVersion_200 = 1,
    FirmwareVersion_300 = 2,
    FirmwareVersion_400 = 3,
    FirmwareVersion_500 = 4,
    FirmwareVersion_600 = 5,
    FirmwareVersion_700 = 6,
    FirmwareVersion_Current = FirmwareVersion_700,
    FirmwareVersion_Max = 32,
};

enum AtmosphereTargetFirmware : u32 {
    AtmosphereTargetFirmware_100 = 1,
    AtmosphereTargetFirmware_200 = 2,
    AtmosphereTargetFirmware_300 = 3,
    AtmosphereTargetFirmware_400 = 4,
    AtmosphereTargetFirmware_500 = 5,
    AtmosphereTargetFirmware_600 = 6,
    AtmosphereTargetFirmware_620 = 7,
    AtmosphereTargetFirmware_700 = 8,
};

FirmwareVersion GetRuntimeFirmwareVersion();

void SetFirmwareVersionForLibnx();