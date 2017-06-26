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


class HudsonmodelStringParameterValue(object):
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
        'name': 'str',
        'value': 'str'
    }

    attribute_map = {
        '_class': '_class',
        'name': 'name',
        'value': 'value'
    }

    def __init__(self, _class=None, name=None, value=None):
        """
        HudsonmodelStringParameterValue - a model defined in Swagger
        """

        self.__class = None
        self._name = None
        self._value = None

        if _class is not None:
          self._class = _class
        if name is not None:
          self.name = name
        if value is not None:
          self.value = value

    @property
    def _class(self):
        """
        Gets the _class of this HudsonmodelStringParameterValue.

        :return: The _class of this HudsonmodelStringParameterValue.
        :rtype: str
        """
        return self.__class

    @_class.setter
    def _class(self, _class):
        """
        Sets the _class of this HudsonmodelStringParameterValue.

        :param _class: The _class of this HudsonmodelStringParameterValue.
        :type: str
        """

        self.__class = _class

    @property
    def name(self):
        """
        Gets the name of this HudsonmodelStringParameterValue.

        :return: The name of this HudsonmodelStringParameterValue.
        :rtype: str
        """
        return self._name

    @name.setter
    def name(self, name):
        """
        Sets the name of this HudsonmodelStringParameterValue.

        :param name: The name of this HudsonmodelStringParameterValue.
        :type: str
        """

        self._name = name

    @property
    def value(self):
        """
        Gets the value of this HudsonmodelStringParameterValue.

        :return: The value of this HudsonmodelStringParameterValue.
        :rtype: str
        """
        return self._value

    @value.setter
    def value(self, value):
        """
        Sets the value of this HudsonmodelStringParameterValue.

        :param value: The value of this HudsonmodelStringParameterValue.
        :type: str
        """

        self._value = value

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
        if not isinstance(other, HudsonmodelStringParameterValue):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """
        Returns true if both objects are not equal
        """
        return not self == other
