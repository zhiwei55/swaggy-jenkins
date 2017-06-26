# coding: utf-8

"""
    Swaggy Jenkins

    Jenkins API client generated from Swagger / Open API specification

    OpenAPI spec version: 0.0.1
    Contact: blah@cliffano.com
    Generated by: https://github.com/swagger-api/swagger-codegen.git
"""


from pprint import pformat
from six import iteritems
import re


class HudsonmodelHudsonMasterComputerMonitorData(object):
    """
    NOTE: This class is auto generated by the swagger code generator program.
    Do not edit the class manually.
    """


    """
    Attributes:
      swagger_types (dict): The key is attribute name
                            and the value is attribute type.
      attribute_map (dict): The key is attribute name
                            and the value is json key in definition.
    """
    swagger_types = {
        'hudson_node_monitors_swap_space_monitor': 'HudsonnodeMonitorsSwapSpaceMonitorMemoryUsage2',
        'hudson_node_monitors_temporary_space_monitor': 'HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace',
        'hudson_node_monitors_disk_space_monitor': 'HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace',
        'hudson_node_monitors_architecture_monitor': 'str',
        'hudson_node_monitors_response_time_monitor': 'HudsonnodeMonitorsResponseTimeMonitorData',
        'hudson_node_monitors_clock_monitor': 'HudsonutilClockDifference',
        '_class': 'str'
    }

    attribute_map = {
        'hudson_node_monitors_swap_space_monitor': 'hudson.node_monitors.SwapSpaceMonitor',
        'hudson_node_monitors_temporary_space_monitor': 'hudson.node_monitors.TemporarySpaceMonitor',
        'hudson_node_monitors_disk_space_monitor': 'hudson.node_monitors.DiskSpaceMonitor',
        'hudson_node_monitors_architecture_monitor': 'hudson.node_monitors.ArchitectureMonitor',
        'hudson_node_monitors_response_time_monitor': 'hudson.node_monitors.ResponseTimeMonitor',
        'hudson_node_monitors_clock_monitor': 'hudson.node_monitors.ClockMonitor',
        '_class': '_class'
    }

    def __init__(self, hudson_node_monitors_swap_space_monitor=None, hudson_node_monitors_temporary_space_monitor=None, hudson_node_monitors_disk_space_monitor=None, hudson_node_monitors_architecture_monitor=None, hudson_node_monitors_response_time_monitor=None, hudson_node_monitors_clock_monitor=None, _class=None):
        """
        HudsonmodelHudsonMasterComputerMonitorData - a model defined in Swagger
        """

        self._hudson_node_monitors_swap_space_monitor = None
        self._hudson_node_monitors_temporary_space_monitor = None
        self._hudson_node_monitors_disk_space_monitor = None
        self._hudson_node_monitors_architecture_monitor = None
        self._hudson_node_monitors_response_time_monitor = None
        self._hudson_node_monitors_clock_monitor = None
        self.__class = None

        if hudson_node_monitors_swap_space_monitor is not None:
          self.hudson_node_monitors_swap_space_monitor = hudson_node_monitors_swap_space_monitor
        if hudson_node_monitors_temporary_space_monitor is not None:
          self.hudson_node_monitors_temporary_space_monitor = hudson_node_monitors_temporary_space_monitor
        if hudson_node_monitors_disk_space_monitor is not None:
          self.hudson_node_monitors_disk_space_monitor = hudson_node_monitors_disk_space_monitor
        if hudson_node_monitors_architecture_monitor is not None:
          self.hudson_node_monitors_architecture_monitor = hudson_node_monitors_architecture_monitor
        if hudson_node_monitors_response_time_monitor is not None:
          self.hudson_node_monitors_response_time_monitor = hudson_node_monitors_response_time_monitor
        if hudson_node_monitors_clock_monitor is not None:
          self.hudson_node_monitors_clock_monitor = hudson_node_monitors_clock_monitor
        if _class is not None:
          self._class = _class

    @property
    def hudson_node_monitors_swap_space_monitor(self):
        """
        Gets the hudson_node_monitors_swap_space_monitor of this HudsonmodelHudsonMasterComputerMonitorData.

        :return: The hudson_node_monitors_swap_space_monitor of this HudsonmodelHudsonMasterComputerMonitorData.
        :rtype: HudsonnodeMonitorsSwapSpaceMonitorMemoryUsage2
        """
        return self._hudson_node_monitors_swap_space_monitor

    @hudson_node_monitors_swap_space_monitor.setter
    def hudson_node_monitors_swap_space_monitor(self, hudson_node_monitors_swap_space_monitor):
        """
        Sets the hudson_node_monitors_swap_space_monitor of this HudsonmodelHudsonMasterComputerMonitorData.

        :param hudson_node_monitors_swap_space_monitor: The hudson_node_monitors_swap_space_monitor of this HudsonmodelHudsonMasterComputerMonitorData.
        :type: HudsonnodeMonitorsSwapSpaceMonitorMemoryUsage2
        """

        self._hudson_node_monitors_swap_space_monitor = hudson_node_monitors_swap_space_monitor

    @property
    def hudson_node_monitors_temporary_space_monitor(self):
        """
        Gets the hudson_node_monitors_temporary_space_monitor of this HudsonmodelHudsonMasterComputerMonitorData.

        :return: The hudson_node_monitors_temporary_space_monitor of this HudsonmodelHudsonMasterComputerMonitorData.
        :rtype: HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace
        """
        return self._hudson_node_monitors_temporary_space_monitor

    @hudson_node_monitors_temporary_space_monitor.setter
    def hudson_node_monitors_temporary_space_monitor(self, hudson_node_monitors_temporary_space_monitor):
        """
        Sets the hudson_node_monitors_temporary_space_monitor of this HudsonmodelHudsonMasterComputerMonitorData.

        :param hudson_node_monitors_temporary_space_monitor: The hudson_node_monitors_temporary_space_monitor of this HudsonmodelHudsonMasterComputerMonitorData.
        :type: HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace
        """

        self._hudson_node_monitors_temporary_space_monitor = hudson_node_monitors_temporary_space_monitor

    @property
    def hudson_node_monitors_disk_space_monitor(self):
        """
        Gets the hudson_node_monitors_disk_space_monitor of this HudsonmodelHudsonMasterComputerMonitorData.

        :return: The hudson_node_monitors_disk_space_monitor of this HudsonmodelHudsonMasterComputerMonitorData.
        :rtype: HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace
        """
        return self._hudson_node_monitors_disk_space_monitor

    @hudson_node_monitors_disk_space_monitor.setter
    def hudson_node_monitors_disk_space_monitor(self, hudson_node_monitors_disk_space_monitor):
        """
        Sets the hudson_node_monitors_disk_space_monitor of this HudsonmodelHudsonMasterComputerMonitorData.

        :param hudson_node_monitors_disk_space_monitor: The hudson_node_monitors_disk_space_monitor of this HudsonmodelHudsonMasterComputerMonitorData.
        :type: HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace
        """

        self._hudson_node_monitors_disk_space_monitor = hudson_node_monitors_disk_space_monitor

    @property
    def hudson_node_monitors_architecture_monitor(self):
        """
        Gets the hudson_node_monitors_architecture_monitor of this HudsonmodelHudsonMasterComputerMonitorData.

        :return: The hudson_node_monitors_architecture_monitor of this HudsonmodelHudsonMasterComputerMonitorData.
        :rtype: str
        """
        return self._hudson_node_monitors_architecture_monitor

    @hudson_node_monitors_architecture_monitor.setter
    def hudson_node_monitors_architecture_monitor(self, hudson_node_monitors_architecture_monitor):
        """
        Sets the hudson_node_monitors_architecture_monitor of this HudsonmodelHudsonMasterComputerMonitorData.

        :param hudson_node_monitors_architecture_monitor: The hudson_node_monitors_architecture_monitor of this HudsonmodelHudsonMasterComputerMonitorData.
        :type: str
        """

        self._hudson_node_monitors_architecture_monitor = hudson_node_monitors_architecture_monitor

    @property
    def hudson_node_monitors_response_time_monitor(self):
        """
        Gets the hudson_node_monitors_response_time_monitor of this HudsonmodelHudsonMasterComputerMonitorData.

        :return: The hudson_node_monitors_response_time_monitor of this HudsonmodelHudsonMasterComputerMonitorData.
        :rtype: HudsonnodeMonitorsResponseTimeMonitorData
        """
        return self._hudson_node_monitors_response_time_monitor

    @hudson_node_monitors_response_time_monitor.setter
    def hudson_node_monitors_response_time_monitor(self, hudson_node_monitors_response_time_monitor):
        """
        Sets the hudson_node_monitors_response_time_monitor of this HudsonmodelHudsonMasterComputerMonitorData.

        :param hudson_node_monitors_response_time_monitor: The hudson_node_monitors_response_time_monitor of this HudsonmodelHudsonMasterComputerMonitorData.
        :type: HudsonnodeMonitorsResponseTimeMonitorData
        """

        self._hudson_node_monitors_response_time_monitor = hudson_node_monitors_response_time_monitor

    @property
    def hudson_node_monitors_clock_monitor(self):
        """
        Gets the hudson_node_monitors_clock_monitor of this HudsonmodelHudsonMasterComputerMonitorData.

        :return: The hudson_node_monitors_clock_monitor of this HudsonmodelHudsonMasterComputerMonitorData.
        :rtype: HudsonutilClockDifference
        """
        return self._hudson_node_monitors_clock_monitor

    @hudson_node_monitors_clock_monitor.setter
    def hudson_node_monitors_clock_monitor(self, hudson_node_monitors_clock_monitor):
        """
        Sets the hudson_node_monitors_clock_monitor of this HudsonmodelHudsonMasterComputerMonitorData.

        :param hudson_node_monitors_clock_monitor: The hudson_node_monitors_clock_monitor of this HudsonmodelHudsonMasterComputerMonitorData.
        :type: HudsonutilClockDifference
        """

        self._hudson_node_monitors_clock_monitor = hudson_node_monitors_clock_monitor

    @property
    def _class(self):
        """
        Gets the _class of this HudsonmodelHudsonMasterComputerMonitorData.

        :return: The _class of this HudsonmodelHudsonMasterComputerMonitorData.
        :rtype: str
        """
        return self.__class

    @_class.setter
    def _class(self, _class):
        """
        Sets the _class of this HudsonmodelHudsonMasterComputerMonitorData.

        :param _class: The _class of this HudsonmodelHudsonMasterComputerMonitorData.
        :type: str
        """

        self.__class = _class

    def to_dict(self):
        """
        Returns the model properties as a dict
        """
        result = {}

        for attr, _ in iteritems(self.swagger_types):
            value = getattr(self, attr)
            if isinstance(value, list):
                result[attr] = list(map(
                    lambda x: x.to_dict() if hasattr(x, "to_dict") else x,
                    value
                ))
            elif hasattr(value, "to_dict"):
                result[attr] = value.to_dict()
            elif isinstance(value, dict):
                result[attr] = dict(map(
                    lambda item: (item[0], item[1].to_dict())
                    if hasattr(item[1], "to_dict") else item,
                    value.items()
                ))
            else:
                result[attr] = value

        return result

    def to_str(self):
        """
        Returns the string representation of the model
        """
        return pformat(self.to_dict())

    def __repr__(self):
        """
        For `print` and `pprint`
        """
        return self.to_str()

    def __eq__(self, other):
        """
        Returns true if both objects are equal
        """
        if not isinstance(other, HudsonmodelHudsonMasterComputerMonitorData):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """
        Returns true if both objects are not equal
        """
        return not self == other
