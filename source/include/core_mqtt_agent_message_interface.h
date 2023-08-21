/*
 * coreMQTT Agent v1.2.0
 * Copyright (C) 2021 Amazon.com, Inc. or its affiliates.  All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 * the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

/**
 * @file core_mqtt_agent_message_interface.h
 * @brief Functions to interact with queues.
 */
#ifndef CORE_MQTT_AGENT_MESSAGE_INTERFACE_H
#define CORE_MQTT_AGENT_MESSAGE_INTERFACE_H

#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

/* *INDENT-OFF* */
#ifdef __cplusplus
    extern "C" {
#endif
/* *INDENT-ON* */

/* Declare here so interface functions can use. */
struct MQTTAgentCommand;
struct MQTTAgentMessageContext;

/**
 * @brief The commands sent from the APIs to the MQTT agent task.
 */
typedef struct MQTTAgentCommand          MQTTAgentCommand_t;

/**
 * @ingroup mqtt_agent_struct_types
 * @brief Context with which tasks may deliver messages to the agent.
 */
/* @[define_messagectx] */
typedef struct MQTTAgentMessageContext   MQTTAgentMessageContext_t;
/* @[define_messagectx] */


/* *INDENT-OFF* */
#ifdef __cplusplus
    }
#endif
/* *INDENT-ON* */

#endif /* CORE_MQTT_AGENT_MESSAGE_INTERFACE_H */
