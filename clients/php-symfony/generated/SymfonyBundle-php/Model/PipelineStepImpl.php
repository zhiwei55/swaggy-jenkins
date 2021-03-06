<?php
/**
 * PipelineStepImpl
 *
 * PHP version 5
 *
 * @category Class
 * @package  Swagger\Server\Model
 * @author   Swagger Codegen team
 * @link     https://github.com/swagger-api/swagger-codegen
 */

/**
 * Swaggy Jenkins
 *
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 0.1.0
 * Contact: blah@cliffano.com
 * Generated by: https://github.com/swagger-api/swagger-codegen.git
 *
 */

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

namespace Swagger\Server\Model;

use \ArrayAccess;
use Swagger\Server\Model\PipelineStepImpllinks;
use Swagger\Server\Model\InputStepImpl;

/**
 * Class representing the PipelineStepImpl model.
 *
 * @package Swagger\Server\Model
 * @author  Swagger Codegen team
 */
class PipelineStepImpl implements ModelInterface, ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      * @var string
      */
    protected static $_name = 'PipelineStepImpl';

    /**
      * Array of property to type mappings. Used for (de)serialization
      * @var array[]
      */
    protected static $_attributes = [
        '_class' => ['_class', 'string', null, 'setClass', 'getClass'],
        '_links' => ['_links', 'Swagger\Server\Model\PipelineStepImpllinks', null, 'setLinks', 'getLinks'],
        'display_name' => ['displayName', 'string', null, 'setDisplayName', 'getDisplayName'],
        'duration_in_millis' => ['durationInMillis', 'int', null, 'setDurationInMillis', 'getDurationInMillis'],
        'id' => ['id', 'string', null, 'setId', 'getId'],
        'input' => ['input', 'Swagger\Server\Model\InputStepImpl', null, 'setInput', 'getInput'],
        'result' => ['result', 'string', null, 'setResult', 'getResult'],
        'start_time' => ['startTime', 'string', null, 'setStartTime', 'getStartTime'],
        'state' => ['state', 'string', null, 'setState', 'getState'],
    ];
    

    
    /**     * @var string|null
     */
    protected $_class;

    /**     * @var PipelineStepImpllinks|null
     */
    protected $_links;

    /**     * @var string|null
     */
    protected $display_name;

    /**     * @var int|null
     */
    protected $duration_in_millis;

    /**     * @var string|null
     */
    protected $id;

    /**     * @var InputStepImpl|null
     */
    protected $input;

    /**     * @var string|null
     */
    protected $result;

    /**     * @var string|null
     */
    protected $start_time;

    /**     * @var string|null
     */
    protected $state;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->_class = isset($data['_class']) ? $data['_class'] : null;
        $this->_links = isset($data['_links']) ? $data['_links'] : null;
        $this->display_name = isset($data['display_name']) ? $data['display_name'] : null;
        $this->duration_in_millis = isset($data['duration_in_millis']) ? $data['duration_in_millis'] : null;
        $this->id = isset($data['id']) ? $data['id'] : null;
        $this->input = isset($data['input']) ? $data['input'] : null;
        $this->result = isset($data['result']) ? $data['result'] : null;
        $this->start_time = isset($data['start_time']) ? $data['start_time'] : null;
        $this->state = isset($data['state']) ? $data['state'] : null;
    }

    /**
     * show all the invalid properties with reasons.
     *
     * @return array invalid properties with reasons
     */
    public function listInvalidProperties()
    {
        $invalid_properties = [];

        return $invalid_properties;
    }

    /**
     * The original name of the model.
     *
     * @return string
     */
    public function modelName() {
        return self::$_name;
    }

    /**
     * Array of property to mappings.
     *
     * @return array[]
     */
    public function modelAttributes() {
        
        return self::$_attributes;
    }

    /**
     * Validate all the properties in the model
     *
     * Return true if all passed.
     *
     * @return bool True if all properties are valid
     */
    public function isValid()
    {
        return true;
    }


    /**
     * Gets _class.
     *
     * @return string|null
     */
    public function getClass()
    {
        return $this->_class;
    }

    /**
     * Sets _class.
     *
     * @param string|null $_class
     *
     * @return $this
     */
    public function setClass($_class = null)
    {
        $this->_class = $_class;

        return $this;
    }

    /**
     * Gets _links.
     *
     * @return PipelineStepImpllinks|null
     */
    public function getLinks()
    {
        return $this->_links;
    }

    /**
     * Sets _links.
     *
     * @param PipelineStepImpllinks|null $_links
     *
     * @return $this
     */
    public function setLinks(PipelineStepImpllinks $_links = null)
    {
        $this->_links = $_links;

        return $this;
    }

    /**
     * Gets display_name.
     *
     * @return string|null
     */
    public function getDisplayName()
    {
        return $this->display_name;
    }

    /**
     * Sets display_name.
     *
     * @param string|null $display_name
     *
     * @return $this
     */
    public function setDisplayName($display_name = null)
    {
        $this->display_name = $display_name;

        return $this;
    }

    /**
     * Gets duration_in_millis.
     *
     * @return int|null
     */
    public function getDurationInMillis()
    {
        return $this->duration_in_millis;
    }

    /**
     * Sets duration_in_millis.
     *
     * @param int|null $duration_in_millis
     *
     * @return $this
     */
    public function setDurationInMillis($duration_in_millis = null)
    {
        $this->duration_in_millis = $duration_in_millis;

        return $this;
    }

    /**
     * Gets id.
     *
     * @return string|null
     */
    public function getId()
    {
        return $this->id;
    }

    /**
     * Sets id.
     *
     * @param string|null $id
     *
     * @return $this
     */
    public function setId($id = null)
    {
        $this->id = $id;

        return $this;
    }

    /**
     * Gets input.
     *
     * @return InputStepImpl|null
     */
    public function getInput()
    {
        return $this->input;
    }

    /**
     * Sets input.
     *
     * @param InputStepImpl|null $input
     *
     * @return $this
     */
    public function setInput(InputStepImpl $input = null)
    {
        $this->input = $input;

        return $this;
    }

    /**
     * Gets result.
     *
     * @return string|null
     */
    public function getResult()
    {
        return $this->result;
    }

    /**
     * Sets result.
     *
     * @param string|null $result
     *
     * @return $this
     */
    public function setResult($result = null)
    {
        $this->result = $result;

        return $this;
    }

    /**
     * Gets start_time.
     *
     * @return string|null
     */
    public function getStartTime()
    {
        return $this->start_time;
    }

    /**
     * Sets start_time.
     *
     * @param string|null $start_time
     *
     * @return $this
     */
    public function setStartTime($start_time = null)
    {
        $this->start_time = $start_time;

        return $this;
    }

    /**
     * Gets state.
     *
     * @return string|null
     */
    public function getState()
    {
        return $this->state;
    }

    /**
     * Sets state.
     *
     * @param string|null $state
     *
     * @return $this
     */
    public function setState($state = null)
    {
        $this->state = $state;

        return $this;
    }
    /**
     * Returns true if offset exists. False otherwise.
     * @param  integer $offset Offset
     * @return boolean
     */
    public function offsetExists($offset)
    {
        return isset($this->$offset);
    }

    /**
     * Gets offset.
     * @param  integer $offset Offset
     * @return mixed
     */
    public function offsetGet($offset)
    {
        return isset($this->$offset) ? $this->$offset : null;
    }

    /**
     * Sets value based on offset.
     * @param  string  $offset Offset
     * @param  mixed   $value  Value to be set
     * @return void
     */
    public function offsetSet($offset, $value)
    {
        $this->$offset = $value;
    }

    /**
     * Unsets offset.
     * @param  integer $offset Offset
     * @return void
     */
    public function offsetUnset($offset)
    {
        $this->$offset = null;
    }
}


