#!/usr/bin/env python
#
# Copyright (C) 2010, Nokia <ivan.frade@nokia.com>
# Copyright (C) 2018, Sam Thursfield <sam@afuera.me.uk>
#
# This program is free software; you can redistribute it and/or
# modify it under the terms of the GNU General Public License
# as published by the Free Software Foundation; either version 2
# of the License, or (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
# 02110-1301, USA.
#

import unittest as ut

import os
import time

from common.utils.helpers import StoreHelper
from common.utils import configuration as cfg


class CommonTrackerStoreTest (ut.TestCase):
        """
        Common superclass for tests that just require a fresh store running
        """
        @classmethod 
        def setUpClass (self):
            env = os.environ
            env['LC_COLLATE'] = 'en_GB.utf8'

            self.tracker = StoreHelper()
            self.tracker.start(env=env)

        @classmethod
        def tearDownClass (self):
            self.tracker.stop()
