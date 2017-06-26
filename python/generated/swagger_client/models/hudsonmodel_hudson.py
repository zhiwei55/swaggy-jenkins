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


class HudsonmodelHudson(object):
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
        'assigned_labels': 'list[HudsonmodelHudsonassignedLabels]',
        'mode': 'str',
        'node_description': 'str',
        'node_name': 'str',
        'num_executors': 'int',
        'description': 'str',
        'jobs': 'list[HudsonmodelFreeStyleProject]',
        'primary_view': 'HudsonmodelAllView',
        'quieting_down': 'bool',
        'slave_agent_port': 'int',
        'unlabeled_load': 'JenkinsmodelUnlabeledLoadStatistics',
        'use_crumbs': 'bool',
        'use_security': 'bool',
        'views': 'list[HudsonmodelAllView]'
    }

    attribute_map = {
        '_class': '_class',
        'assigned_labels': 'assignedLabels',
        'mode': 'mode',
        'node_description': 'nodeDescription',
        'node_name': 'nodeName',
        'num_executors': 'numExecutors',
        'description': 'description',
        'jobs': 'jobs',
        'primary_view': 'primaryView',
        'quieting_down': 'quietingDown',
        'slave_agent_port': 'slaveAgentPort',
        'unlabeled_load': 'unlabeledLoad',
        'use_crumbs': 'useCrumbs',
        'use_security': 'useSecurity',
        'views': 'views'
    }

    def __init__(self, _class=None, assigned_labels=None, mode=None, node_description=None, node_name=None, num_executors=None, description=None, jobs=None, primary_view=None, quieting_down=None, slave_agent_port=None, unlabeled_load=None, use_crumbs=None, use_security=None, views=None):
        """
        HudsonmodelHudson - a model defined in Swagger
        """

        self.__class = None
        self._assigned_labels = None
        self._mode = None
        self._node_description = None
        self._node_name = None
        self._num_executors = None
        self._description = None
        self._jobs = None
        self._primary_view = None
        self._quieting_down = None
        self._slave_agent_port = None
        self._unlabeled_load = None
        self._use_crumbs = None
        self._use_security = None
        self._views = None

        if _class is not None:
          self._class = _class
        if assigned_labels is not None:
          self.assigned_labels = assigned_labels
        if mode is not None:
          self.mode = mode
        if node_description is not None:
          self.node_description = node_description
        if node_name is not None:
          self.node_name = node_name
        if num_executors is not None:
          self.num_executors = num_executors
        if description is not None:
          self.description = description
        if jobs is not None:
          self.jobs = jobs
        if primary_view is not None:
          self.primary_view = primary_view
        if quieting_down is not None:
          self.quieting_down = quieting_down
        if slave_agent_port is not None:
          self.slave_agent_port = slave_agent_port
        if unlabeled_load is not None:
          self.unlabeled_load = unlabeled_load
        if use_crumbs is not None:
          self.use_crumbs = use_crumbs
        if use_security is not None:
          self.use_security = use_security
        if views is not None:
          self.views = views

    @property
    def _class(self):
        """
        Gets the _class of this HudsonmodelHudson.

        :return: The _class of this HudsonmodelHudson.
        :rtype: str
        """
        return self.__class

    @_class.setter
    def _class(self, _class):
        """
        Sets the _class of this HudsonmodelHudson.

        :param _class: The _class of this HudsonmodelHudson.
        :type: str
        """

        self.__class = _class

    @property
    def assigned_labels(self):
        """
        Gets the assigned_labels of this HudsonmodelHudson.

        :return: The assigned_labels of this HudsonmodelHudson.
        :rtype: list[HudsonmodelHudsonassignedLabels]
        """
        return self._assigned_labels

    @assigned_labels.setter
    def assigned_labels(self, assigned_labels):
        """
        Sets the assigned_labels of this HudsonmodelHudson.

        :param assigned_labels: The assigned_labels of this HudsonmodelHudson.
        :type: list[HudsonmodelHudsonassignedLabels]
        """

        self._assigned_labels = assigned_labels

    @property
    def mode(self):
        """
        Gets the mode of this HudsonmodelHudson.

        :return: The mode of this HudsonmodelHudson.
        :rtype: str
        """
        return self._mode

    @mode.setter
    def mode(self, mode):
        """
        Sets the mode of this HudsonmodelHudson.

        :param mode: The mode of this HudsonmodelHudson.
        :type: str
        """

        self._mode = mode

    @property
    def node_description(self):
        """
        Gets the node_description of this HudsonmodelHudson.

        :return: The node_description of this HudsonmodelHudson.
        :rtype: str
        """
        return self._node_description

    @node_description.setter
    def node_description(self, node_description):
        """
        Sets the node_description of this HudsonmodelHudson.

        :param node_description: The node_description of this HudsonmodelHudson.
        :type: str
        """

        self._node_description = node_description

    @property
    def node_name(self):
        """
        Gets the node_name of this HudsonmodelHudson.

        :return: The node_name of this HudsonmodelHudson.
        :rtype: str
        """
        return self._node_name

    @node_name.setter
    def node_name(self, node_name):
        """
        Sets the node_name of this HudsonmodelHudson.

        :param node_name: The node_name of this HudsonmodelHudson.
        :type: str
        """

        self._node_name = node_name

    @property
    def num_executors(self):
        """
        Gets the num_executors of this HudsonmodelHudson.

        :return: The num_executors of this HudsonmodelHudson.
        :rtype: int
        """
        return self._num_executors

    @num_executors.setter
    def num_executors(self, num_executors):
        """
        Sets the num_executors of this HudsonmodelHudson.

        :param num_executors: The num_executors of this HudsonmodelHudson.
        :type: int
        """

        self._num_executors = num_executors

    @property
    def description(self):
        """
        Gets the description of this HudsonmodelHudson.

        :return: The description of this HudsonmodelHudson.
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description):
        """
        Sets the description of this HudsonmodelHudson.

        :param description: The description of this HudsonmodelHudson.
        :type: str
        """

        self._description = description

    @property
    def jobs(self):
        """
        Gets the jobs of this HudsonmodelHudson.

        :return: The jobs of this HudsonmodelHudson.
        :rtype: list[HudsonmodelFreeStyleProject]
        """
        return self._jobs

    @jobs.setter
    def jobs(self, jobs):
        """
        Sets the jobs of this HudsonmodelHudson.

        :param jobs: The jobs of this HudsonmodelHudson.
        :type: list[HudsonmodelFreeStyleProject]
        """

        self._jobs = jobs

    @property
    def primary_view(self):
        """
        Gets the primary_view of this HudsonmodelHudson.

        :return: The primary_view of this HudsonmodelHudson.
        :rtype: HudsonmodelAllView
        """
        return self._primary_view

    @primary_view.setter
    def primary_view(self, primary_view):
        """
        Sets the primary_view of this HudsonmodelHudson.

        :param primary_view: The primary_view of this HudsonmodelHudson.
        :type: HudsonmodelAllView
        """

        self._primary_view = primary_view

    @property
    def quieting_down(self):
        """
        Gets the quieting_down of this HudsonmodelHudson.

        :return: The quieting_down of this HudsonmodelHudson.
        :rtype: bool
        """
        return self._quieting_down

    @quieting_down.setter
    def quieting_down(self, quieting_down):
        """
        Sets the quieting_down of this HudsonmodelHudson.

        :param quieting_down: The quieting_down of this HudsonmodelHudson.
        :type: bool
        """

        self._quieting_down = quieting_down

    @property
    def slave_agent_port(self):
        """
        Gets the slave_agent_port of this HudsonmodelHudson.

        :return: The slave_agent_port of this HudsonmodelHudson.
        :rtype: int
        """
        return self._slave_agent_port

    @slave_agent_port.setter
    def slave_agent_port(self, slave_agent_port):
        """
        Sets the slave_agent_port of this HudsonmodelHudson.

        :param slave_agent_port: The slave_agent_port of this HudsonmodelHudson.
        :type: int
        """

        self._slave_agent_port = slave_agent_port

    @property
    def unlabeled_load(self):
        """
        Gets the unlabeled_load of this HudsonmodelHudson.

        :return: The unlabeled_load of this HudsonmodelHudson.
        :rtype: JenkinsmodelUnlabeledLoadStatistics
        """
        return self._unlabeled_load

    @unlabeled_load.setter
    def unlabeled_load(self, unlabeled_load):
        """
        Sets the unlabeled_load of this HudsonmodelHudson.

        :param unlabeled_load: The unlabeled_load of this HudsonmodelHudson.
        :type: JenkinsmodelUnlabeledLoadStatistics
        """

        self._unlabeled_load = unlabeled_load

    @property
    def use_crumbs(self):
        """
        Gets the use_crumbs of this HudsonmodelHudson.

        :return: The use_crumbs of this HudsonmodelHudson.
        :rtype: bool
        """
        return self._use_crumbs

    @use_crumbs.setter
    def use_crumbs(self, use_crumbs):
        """
        Sets the use_crumbs of this HudsonmodelHudson.

        :param use_crumbs: The use_crumbs of this HudsonmodelHudson.
        :type: bool
        """

        self._use_crumbs = use_crumbs

    @property
    def use_security(self):
        """
        Gets the use_security of this HudsonmodelHudson.

        :return: The use_security of this HudsonmodelHudson.
        :rtype: bool
        """
        return self._use_security

    @use_security.setter
    def use_security(self, use_security):
        """
        Sets the use_security of this HudsonmodelHudson.

        :param use_security: The use_security of this HudsonmodelHudson.
        :type: bool
        """

        self._use_security = use_security

    @property
    def views(self):
        """
        Gets the views of this HudsonmodelHudson.

        :return: The views of this HudsonmodelHudson.
        :rtype: list[HudsonmodelAllView]
        """
        return self._views

    @views.setter
    def views(self, views):
        """
        Sets the views of this HudsonmodelHudson.

        :param views: The views of this HudsonmodelHudson.
        :type: list[HudsonmodelAllView]
        """

        self._views = views

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
        if not isinstance(other, HudsonmodelHudson):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """
        Returns true if both objects are not equal
        """
        return not self == other
