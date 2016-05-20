<!--
  UW Mentour Project
  profile page
  Dajia Bao
  Xuli zhou
  Jeff Ma
-->

    <div class="col-xs-12" style="height:70px;"></div>

    <div class="container">
      <div class="col-md-8 col-md-offset-2">
      <div class="row">
        <div class="col-md-3">
          <img src="http://students.washington.edu/xulizhou/info_capstone/final_version/images/profile/u282.jpg" 
            alt="pc1" style="width:150px;height:180px;"/>
        </div>
        <div class="col-md-3">
          <div style="color:#4b2e83;font-size:15pt;padding-top:10px;margin-bottom:20px;">
            <img src="http://metro.kingcounty.gov/up/spclevent/huskies/images/uw_logo.png"
                alt="pc1" style="width:42px;height:29px;"/> Jeff Ma
          </div>

          <div class="row">
            <div class="col-md-6"><strong>UW status</strong></div>
            <div class="col-md-6">Student</div>
          </div>
          <div class="row">
            <div class="col-md-6"><strong>Language:</strong></div>
            <div class="col-md-6">English</div>
          </div>
          <div class="row">
            <div class="col-md-6"><strong>Industry:</strong></div>
            <div class="col-md-6">Automotive</div>
          </div>
          <div class="row">
            <div class="col-md-6"><strong>Mentoring:</strong></div>
            <div class="col-md-6">Personal</div>
          </div>
        </div>
        <div class="col-md-6">
          <div class="col-md-6" style="color:#b7a57a;font-size:15pt;padding-top:8px;margin-bottom:20px;">
            5000 <img src="images/staricon.png" alt="recommendations"/>
          </div>
        </div>
      </div>
      <div class="row">
        <div style="margin-bottom:30px;"></div>
        <div class="col-md-12">
          <div style="color:#4b2e83;font-size:15pt;padding-top:5px;margin-bottom:5px;">
            About
          </div>
          <hr style="margin-bottom:10px;margin-top:10px;"/>
          <div style="text-muted;margin-bottom:15px;">
            I am currently a senior at the University of Washington in the informatics program.
            As a student I have struggled throughout my academic career.
            I never graduated from high school or received a GED. When I originally
            attended college I screwed up big time. Many years later, with determination and
            hard work I was able to get my academic plan on track. I plan graduating this year
            with plans to work in the IT field. I am a looking to mentor troubled students or
            students who are struggling academically. I am not available during weekdays but 
            I am usually available during weekends.  
          </div>

          <div style="color:#4b2e83;font-size:15pt;padding-top:5px;margin-bottom:5px;">
            Background
          </div>
          <hr style="margin-bottom:10px;margin-top:10px;"/>

          <div class="row">
            <div class="col-md-6">
              <div>
                <strong>UW status: </strong>
                  Student
              </div>
              <div>
                <strong>Major: </strong>
                Informatics
              </div>
              <div>
                <strong>Minor: </strong>
                None
              </div>
              <div>
                <strong>Year: </strong>
                Senior
              </div>
            </div>
            <div class="col-md-6">
              <div>
                <strong>Location: </strong>
                Seattle
              </div>
              <div>
                <strong>Degree: </strong>
                Associates
              </div>
              <div>
                <strong>Occupation: </strong>
                Mechanic
              </div>
              <div>
                <strong>Skills: </strong>
                HTML, CSS, Javascript, PHP
              </div>
            </div>
          </div>
        <div style="margin-bottom:20px;"></div>

      <div style="margin-bottom:20px;"></div>
        <div style="color:#4b2e83;font-size:15pt;padding-top:5px;margin-bottom:5px;">
          Looking for
        </div>
        <hr style="margin-bottom:10px;margin-top:10px;"/>
        <div style="text-muted;margin-bottom:15px;">
          I am looking to mentor troubled youth in need of guidance. 
          A perfect mentee would be someone who likes technology and cars.
        </div>
          <div style="color:#4b2e83;font-size:15pt;">
            Send a message
          </div>
          <hr style="margin-bottom:15px;margin-top:10px;"/>
          <div class="row">
            <div class="col-md-12">
              <form action="/" method="post">
                <div class="form-group">
                  <textarea class="form-control" rows="5" id="comment"></textarea>
                </div>
              </form>
              <button class="btn btn-info" data-toggle="modal" data-target="#confirmation"> Send </button>
            </div>
          </div>
      </div>
      </div> 
    </div> <!-- close container-->

    <div class="col-xs-12" style="height:20px;"></div>

<!-- hidden modal for message sent confirmation -->
    <div class="modal fade" id="confirmation" role="dialog">
      <div class="modal-dialog">
        <!-- Modal content-->
        <div class="modal-content">
          <div class="modal-header">
            <button type="button" class="close" data-dismiss="modal">&times;</button>
            <h4 class="modal-title">Message confirmation</h4>
          </div>
          <div class="modal-body">
            <p>Your message was sent!</p>
          </div>
          <div class="modal-footer">
            <button type="button" class="btn btn-default" data-dismiss="modal">Close</button>
          </div>
        </div>
      </div>
    </div>

<!-- clear message box after confirmation message -->
<script>
$(document).ready(function(){
  $(".btn-default").click(function(){
      $('textarea').val('');
  });
});
</script>