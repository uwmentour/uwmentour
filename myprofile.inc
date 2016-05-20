<!--
  UW Mentour Project
  background page
  Dajia Bao
  Xuli zhou
  Jeff Ma
-->

 <div class="container" style="margin-top:80px;margin-bottom:50px;">
    <form action="myprofile.php" method="post" id="myProfile">
      <div class="col-md-6 col-md-offset-3">
        <div class="row">
          <div class="col-md-6">
            <img src="images/default.jpg" alt="pc1" style="width:174px;height:174px;"/>
            <div style="color:#4b2e83;font-size:15pt;padding-top:10px;margin-bottom:5px;">
              Upload Image (Optional)
            </div>
            <div>
              <label for="ImageFileName"></label>
              <button class="file-upload">            
              <input type="file" class="file-input">Choose File</button>
            </div>
          </div>
          <div class="col-md-6">
            <div class="form-group">
              <label>Please select your mentoring status:</label>
              <div class="radio">
                <label><input type="radio" name="MentoringType" value="mentee" checked>Mentee</label>
              </div>
              <div class="radio">
                <label><input type="radio" name="MentoringType" value="mentor">Mentor</label>
              </div>
            </div>
            <div class="form-group">
              <label>Please select your UW status:</label>
              <div class="radio">
                <label><input type="radio" name="UWStatus" value="student" class="staus" checked>Student</label>
              </div>
              <div class="radio">
                <label><input type="radio" name="UWStatus" value="faculty" class="staus">Faculty</label>
              </div>
              <div class="radio">
                <label><input type="radio" name="UWStatus" value="alumni" class="staus">Alumni</label>
              </div>
            </div>
          </div>
        </div>
    
      <hr style="margin-bottom:10px;margin-top:10px;"/>
    
      <div style="color:#4b2e83;font-size:15pt;padding-top:5px;margin-bottom:5px;">
        About
      </div>
      <div class="form-group">
        <label>Please describe yourself:</label>
        <textarea class="form-control" rows="12" id="comment" placeholder="(Click to edit) What kind of personality best describes you?  What are your interests?  What are your hobbies?  What should your ideal match know about you?"></textarea>
      </div>
        <hr style="margin-bottom:10px;margin-top:10px;"/>
        <div style="color:#4b2e83;font-size:15pt;padding-top:5px;margin-bottom:5px;">
          Background
      </div>
      <!-- Student row fields -->
      <div class="row profile-student">
        <div class="col-md-6">
          <div class="form-group">
            <select class="form-control" name="Major">
              <option value="All languages" disabled selected>Major</option>
              <option value="English">Anthropology</option>
              <option value="French">Applied math</option>
              <option value="Spanish">Astronomy</option>
              <option value="Chinese">Biology</option>
              <option value="French">Business</option>
              <option value="Other">Chemistry</option>
              <option value="English">Computer science</option>
              <option value="French">Economics</option>
              <option value="Spanish">English</option>
              <option value="Chinese">Geography</option>
              <option value="Other">History</option>
              <option value="French">Informatics</option>
              <option value="Chinese">Nursing</option>
              <option value="Other">Physics</option>
              <option value="English">Sociology</option>
              <option value="English">None</option>
            </select>
          </div>
          <div class="form-group">
            <select class="form-control" name="Minor">
              <option value="All languages" disabled selected>Minor</option>
              <option value="English">Anthropology</option>
              <option value="French">Applied math</option>
              <option value="Spanish">Astronomy</option>
              <option value="Chinese">Biology</option>
              <option value="French">Business</option>
              <option value="Other">Chemistry</option>
              <option value="English">Computer science</option>
              <option value="French">Economics</option>
              <option value="Spanish">English</option>
              <option value="Chinese">Geography</option>
              <option value="Other">History</option>
              <option value="French">Informatics</option>
              <option value="Chinese">Nursing</option>
              <option value="Other">Physics</option>
              <option value="English">Sociology</option>
              <option value="English">None</option>
            </select>
          </div>
          <div class="form-group">
            <select class="form-control" name="Year">
              <option value="All languages" disabled selected>Year</option>
              <option value="English">Freshman</option>
              <option value="French">Sophomore</option>
              <option value="Spanish">Junior</option>
              <option value="Chinese">Senior</option>
              <option value="Other">Beyond senior</option>
            </select>
          </div>
          <div class="form-group">
            <input type="text" class="form-control" name="Language" placeholder="Languages spoken">
          </div>
          <div class="form-group">
            <input type="text" class="form-control" name="Location "placeholder="Location">
          </div>
        </div>
        <div class="col-md-6">
          <div class="form-group">
            <select class="form-control" name="DegreeType">
              <option value="All languages" disabled selected>Degree type</option>
              <option value="English">GED / HS diploma</option>
              <option value="Associates">Associates</option>
              <option value="Bachelors">Bachelors</option>
              <option value="Masters">Masters</option>
              <option value="Doctorate">Doctorate</option>
              <option value="Other">Other</option>
              <option value="None">None</option>
            </select>
          </div>
          <div class="form-group">
            <input type="text" class="form-control" name="Degree" placeholder="Degree">
          </div>
          <div class="form-group">
            <input type="text" class="form-control" name="Occupation" placeholder="Occupation">
          </div>
          <div class="form-group">
            <textarea class="form-control" rows="3" name="Skills" placeholder="Skills"></textarea>
          </div>
        </div>
      </div> <!-- End of student row -->

      <!-- Faculty row fields -->
      <div class="row profile-faculty">
        <div class="col-md-6">
          <div class="form-group">
            <select class="form-control" name="Department">
              <option value="All languages" disabled selected>Department</option>
              <option value="English">Anthropology</option>
              <option value="French">Applied math</option>
              <option value="Spanish">Astronomy</option>
              <option value="Chinese">Biology</option>
              <option value="French">Business</option>
              <option value="Other">Chemistry</option>
              <option value="English">Computer science</option>
              <option value="French">Economics</option>
              <option value="Spanish">English</option>
              <option value="Chinese">Geography</option>
              <option value="Other">History</option>
              <option value="French">Informatics</option>
              <option value="Chinese">Nursing</option>
              <option value="Other">Physics</option>
              <option value="English">Sociology</option>
              <option value="English">None</option>
            </select>
          </div>
          <div class="form-group">
            <select class="form-control" name="YearsAtUW">
              <option value="All languages" disabled selected>Years at UW</option>
              <option value="English">Less than one year</option>
              <option value="French">1-2</option>
              <option value="Spanish">3-5</option>
              <option value="Chinese">6-9</option>
              <option value="Other">10-15</option>
              <option value="Other">More than 15</option>
            </select>
          </div>
          <div class="form-group">
            <select class="form-control" name="DegreeType">
              <option value="All languages" disabled selected>Degree type</option>
              <option value="English">GED / HS diploma</option>
              <option value="Associates">Associates</option>
              <option value="Bachelors">Bachelors</option>
              <option value="Masters">Masters</option>
              <option value="Doctorate">Doctorate</option>
              <option value="Other">Other</option>
              <option value="None">None</option>
            </select>
          </div>
          <div class="form-group">
            <input type="text" class="form-control" name="Degree" placeholder="Degree">
          </div>
          <div class="form-group">
            <input type="text" class="form-control" name="Location"placeholder="Location">
          </div>
        </div>
        <div class="col-md-6">
          <div class="form-group">
            <input type="text" class="form-control" name="Language" placeholder="Languages spoken">
          </div>
          <div class="form-group">
            <input type="text" class="form-control" name="Occupation" placeholder="Occupation">
          </div>
          <div class="form-group">
            <input type="text" class="form-control" name="Industry" placeholder="Industry">
          </div>
          <div class="form-group">
            <textarea class="form-control" rows="4" name="Skills" placeholder="Skills faculty"></textarea>
          </div>
        </div>
      </div> <!-- End of faculty row -->

      <!-- Alumni row fields -->
      <div class="row profile-alumni">
        <div class="col-md-6">
          <div class="form-group">
            <select class="form-control" name="Major">
              <option value="All languages" disabled selected>Major</option>
              <option value="English">Anthropology</option>
              <option value="French">Applied math</option>
              <option value="Spanish">Astronomy</option>
              <option value="Chinese">Biology</option>
              <option value="French">Business</option>
              <option value="Other">Chemistry</option>
              <option value="English">Computer science</option>
              <option value="French">Economics</option>
              <option value="Spanish">English</option>
              <option value="Chinese">Geography</option>
              <option value="Other">History</option>
              <option value="French">Informatics</option>
              <option value="Chinese">Nursing</option>
              <option value="Other">Physics</option>
              <option value="English">Sociology</option>
              <option value="English">None</option>
            </select>
          </div>
          <div class="form-group">
            <select class="form-control" name="Minor">
              <option value="All languages" disabled selected>Minor</option>
              <option value="English">Anthropology</option>
              <option value="French">Applied math</option>
              <option value="Spanish">Astronomy</option>
              <option value="Chinese">Biology</option>
              <option value="French">Business</option>
              <option value="Other">Chemistry</option>
              <option value="English">Computer science</option>
              <option value="French">Economics</option>
              <option value="Spanish">English</option>
              <option value="Chinese">Geography</option>
              <option value="Other">History</option>
              <option value="French">Informatics</option>
              <option value="Chinese">Nursing</option>
              <option value="Other">Physics</option>
              <option value="English">Sociology</option>
              <option value="English">None</option>
            </select>
          </div>
          <div class="form-group">
            <select class="form-control" name="Year">
              <option value="All languages" disabled selected>Year</option>
              <option value="English">Freshman</option>
              <option value="French">Sophomore</option>
              <option value="Spanish">Junior</option>
              <option value="Chinese">Senior</option>
              <option value="Other">Beyond senior</option>
            </select>
          </div>
          <div class="form-group">
            <input type="text" class="form-control" placeholder="Languages spoken">
          </div>
          <div class="form-group">
            <input type="text" class="form-control" placeholder="Location">
          </div>
        </div>
        <div class="col-md-6">
          <div class="form-group">
            <input type="text" class="form-control" placeholder="Degree">
          </div>
          <div class="form-group">
            <input type="text" class="form-control" placeholder="Occupation">
          </div>
          <div class="form-group">
            <textarea class="form-control" rows="5" placeholder="Skills alumni"></textarea>
          </div>
        </div>
      </div> <!-- End of alumni row -->

      <hr style="margin-bottom:10px;margin-top:10px;"/>
      <div style="color:#4b2e83;font-size:15pt;padding-top:5px;margin-bottom:5px;">
        What are you looking for
      </div>
      <div class="form-group">
          <label>Please describe your ideal match:</label>
          <textarea class="form-control" rows="12" placeholder="(Click to edit) What qualities do you look for? What are most important to you?  Describing in detail what you are looking for will help others connect with you."></textarea>
      </div>
      <hr style="margin-bottom:10px;margin-top:10px;"/>

      <div style="color:#4b2e83;font-size:15pt;padding-top:5px;margin-bottom:5px;">
        Mentoring type
      </div> 

      <div class="form-group">
        <label>What types of mentoring are you interested in?</label>
        <div class="checkbox">
          <label><input type="checkbox" value="">Academic</label>
        </div>
        <div class="checkbox">
          <label><input type="checkbox" value="">Career</label>
        </div>
        <div class="checkbox disabled">
          <label><input type="checkbox" value="">Personal</label>
        </div>
      </div>
      <a href="home.php"><button class="btn btn-info"> Submit </button></a>
    </div> <!--col-md-6 col-md-offset-3-->
  </form>
</div> <!--close for container-->

<?php 
echo "<pre>";
print_r($_POST);
echo "</pre>";
?>

<!-- Hide and display fields depending on UW status  -->
<script>
  $(document).ready(function(){
    $('.profile-alumni').hide();
    $('.profile-faculty').hide();
    $('#myProfile input').on('change', function() {
      var value = $('input[name=UWStatus]:checked').val();
      //alert(value);
    if (value == 'faculty') {
      $('.profile-faculty').show();
      $('.profile-student').hide();
      $('.profile-alumni').hide();
    } else if (value == 'alumni') {
      $('.profile-alumni').show();
      $('.profile-student').hide();
      $('.profile-faculty').hide();
    } else {
      $('.profile-student').show();
      $('.profile-faculty').hide();
      $('.profile-alumni').hide();
    }
  //alert($('input[name=UWStatus]:checked').val()); 
  });
  $("#myProfile > :input:hidden").prop("disabled", true);
});
</script>
 
<!-- <script>
$(document).ready(function(){
$('#myProfile input').on('change', function() {
   alert($('input[name=radioName]:checked').val()); 
});
  $('.profile-alumni').hide();
  $('.profile-faculty').hide();
});

</script>-->