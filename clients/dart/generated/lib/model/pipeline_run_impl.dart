part of swagger.api;


@Entity()
class PipelineRunImpl {
  
  @Property(name: '_class')
  String _class = null;
  

  @Property(name: '_links')
  PipelineRunImpllinks links = null;
  

  @Property(name: 'durationInMillis')
  int durationInMillis = null;
  

  @Property(name: 'enQueueTime')
  String enQueueTime = null;
  

  @Property(name: 'endTime')
  String endTime = null;
  

  @Property(name: 'estimatedDurationInMillis')
  int estimatedDurationInMillis = null;
  

  @Property(name: 'id')
  String id = null;
  

  @Property(name: 'organization')
  String organization = null;
  

  @Property(name: 'pipeline')
  String pipeline = null;
  

  @Property(name: 'result')
  String result = null;
  

  @Property(name: 'runSummary')
  String runSummary = null;
  

  @Property(name: 'startTime')
  String startTime = null;
  

  @Property(name: 'state')
  String state = null;
  

  @Property(name: 'type')
  String type = null;
  

  @Property(name: 'commitId')
  String commitId = null;
  
  PipelineRunImpl();

  @override
  String toString()  {
    return 'PipelineRunImpl[_class=$_class, links=$links, durationInMillis=$durationInMillis, enQueueTime=$enQueueTime, endTime=$endTime, estimatedDurationInMillis=$estimatedDurationInMillis, id=$id, organization=$organization, pipeline=$pipeline, result=$result, runSummary=$runSummary, startTime=$startTime, state=$state, type=$type, commitId=$commitId, ]';
  }

}

