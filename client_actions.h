/* -*- c -*- */
/* $Id$ */

#ifndef __CLIENT_ACTIONS_H__
#define __CLIENT_ACTIONS_H__

/* Copyright (C) 2002,2003 Alexander Chernov <cher@ispras.ru> */

/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

enum
  {
    ACTION_DUMMY = 0,
    ACTION_RUN_CHANGE_USER_ID,
    ACTION_RUN_CHANGE_USER_LOGIN,
    ACTION_RUN_CHANGE_LANG,
    ACTION_RUN_CHANGE_PROB,
    ACTION_RUN_CHANGE_STATUS,
    ACTION_USER_TOGGLE_BAN,
    ACTION_USER_TOGGLE_VISIBILITY,
    ACTION_USER_TOGGLE_LOCK,
    ACTION_GENERATE_PASSWORDS_1,
    ACTION_GENERATE_PASSWORDS_2,
    ACTION_SUSPEND,
    ACTION_RESUME,
    ACTION_UPDATE_STANDINGS_1,
    ACTION_UPDATE_STANDINGS_2,
    ACTION_RESET_1,
    ACTION_RESET_2,
    ACTION_START,
    ACTION_STOP,
    ACTION_REJUDGE_ALL_1,
    ACTION_REJUDGE_ALL_2,
    ACTION_REJUDGE_PROBLEM,
    ACTION_SCHEDULE,
    ACTION_DURATION,
    ACTION_LOGOUT,
    ACTION_CHANGE_LANGUAGE,
    ACTION_CHANGE_PASSWORD,
    ACTION_SUBMIT_RUN,
    ACTION_SUBMIT_CLAR,
    ACTION_STANDINGS,
    ACTION_START_VIRTUAL,
    ACTION_STOP_VIRTUAL,
    ACTION_RESET_FILTER,
    ACTION_CLEAR_RUN,
    ACTION_CLEAR_RUN_2,
    ACTION_SQUEEZE_RUNS,
    ACTION_SQUEEZE_RUNS_2,
    ACTION_DUMP_RUNS,
    ACTION_DUMP_USERS,
    ACTION_DUMP_STANDINGS,
    ACTION_SET_JUDGING_MODE,
    ACTION_CONTINUE,
    ACTION_CONTINUE_2,
    ACTION_GENERATE_REG_PASSWORDS_1,
    ACTION_GENERATE_REG_PASSWORDS_2,
    ACTION_LAST
  };

#endif /* __CLIENT_ACTIONS_H__ */

