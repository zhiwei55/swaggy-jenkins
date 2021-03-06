# coding: utf-8

"""
    Swaggy Jenkins

    Jenkins API clients generated from Swagger / Open API specification

    OpenAPI spec version: 0.1.0
    Contact: blah@cliffano.com
    Generated by: https://github.com/swagger-api/swagger-codegen.git
"""


from pprint import pformat
from six import iteritems
import re


class ComputerSet(object):
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
        '_class': 'str',
        'busy_executors': 'int',
        'computer': 'list[HudsonMasterComputer]',
        'display_name': 'str',
        'total_executors': 'int'
    }

    attribute_map = {
        '_class': '_class',
        'busy_executors': 'busyExecutors',
        'computer': 'computer',
        'display_name': 'displayName',
        'total_executors': 'totalExecutors'
    }

    def __init__(self, _class=None, busy_executors=None, computer=None, display_name=None, total_executors=None):
        """
        ComputerSet - a model defined in Swagger
        """

        self.__class = None
        self._busy_executors = None
        self._computer = None
        self._display_name = None
        self._total_executors = None
        self.discriminator = None

        if _class is not None:
          self._class = _class
        if busy_executors is not None:
          self.busy_executors = busy_executors
        if computer is not None:
          self.computer = computer
        if display_name is not None:
          self.display_name = display_name
        if total_executors is not None:
          self.total_executors = total_executors

    @property
    def _class(self):
        """
        Gets the _class of this ComputerSet.

        :return: The _class of this ComputerSet.
        :rtype: str
        """
        return self.__class

    @_class.setter
    def _class(self, _class):
        """
        Sets the _class of this ComputerSet.

        :param _class: The _class of this ComputerSet.
        :type: str
        """

        self.__class = _class

    @property
    def busy_executors(self):
        """
        Gets the busy_executors of this ComputerSet.

        :return: The busy_executors of this ComputerSet.
        :rtype: int
        """
        return self._busy_executors

    @busy_executors.setter
    def busy_executors(self, busy_executors):
        """
        Sets the busy_executors of this ComputerSet.

        :param busy_executors: The busy_executors of this ComputerSet.
        :type: int
        """

        self._busy_executors = busy_executors

    @property
    def computer(self):
        """
        Gets the computer of this ComputerSet.

        :return: The computer of this ComputerSet.
        :rtype: list[HudsonMasterComputer]
        """
        return self._computer

    @computer.setter
    def computer(self, computer):
        """
        Sets the computer of this ComputerSet.

        :param computer: The computer of this ComputerSet.
        :type: list[HudsonMasterComputer]
        """

        self._computer = computer

    @property
    def display_name(self):
        """
        Gets the display_name of this ComputerSet.

        :return: The display_name of this ComputerSet.
        :rtype: str
        """
        return self._display_name

    @display_name.setter
    def display_name(self, display_name):
        """
        Sets the display_name of this ComputerSet.

        :param display_name: The display_name of this ComputerSet.
        :type: str
        """

        self._display_name = display_name

    @property
    def total_executors(self):
        """
        Gets the total_executors of this ComputerSet.

        :return: The total_executors of this ComputerSet.
        :rtype: int
        """
        return self._total_executors

    @total_executors.setter
    def total_executors(self, total_executors):
        """
        Sets the total_executors of this ComputerSet.

        :param total_executors: The total_executors of this ComputerSet.
        :type: int
        """

        self._total_executors = total_executors

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
        if not isinstance(other, ComputerSet):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """
        Returns true if both objects are not equal
        """
        return not self == other
