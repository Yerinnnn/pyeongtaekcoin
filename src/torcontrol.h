// Copyright (c) 2015-2018 The Pyeongtaekcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

/**
 * Functionality for communicating with Tor.
 */
#ifndef PYEONGTAEKCOIN_TORCONTROL_H
#define PYEONGTAEKCOIN_TORCONTROL_H

#include <scheduler.h>

extern const std::string DEFAULT_TOR_CONTROL;
static const bool DEFAULT_LISTEN_ONION = true;

void StartTorControl();
void InterruptTorControl();
void StopTorControl();

#endif /* PYEONGTAEKCOIN_TORCONTROL_H */
