<!--
  UW Mentour Project
  search page
  Dajia Bao
  Xuli zhou
  Jeff Ma
-->
<script>
$(document).ready(function(){
  $(".search-hidden").hide();
  $("button").click(function(){
      $(".search-hidden").show();
  });
});
</script>
    <div class="col-xs-12" style="height:70px;"></div>

    <div class="container">
      <form>
      <div class="row"> <!--section 1-->
        <div class="col-md-6"> <!--top left-->
          <div class="search-label">
            Search for
          </div>
          <label class="radio-inline">
            <input type="radio" name="MentoringType" id="inlineRadio1" value="mentee"> Mentee
          </label>
          <label class="radio-inline">
            <input type="radio" name="MentoringType" id="inlineRadio2" value="mentor" checked> Mentor
          </label>
        </div>
      </div>

      <hr style="margin-bottom:20px;margin-top:20px;"/>

      <div class="row"> <!--section 2-->
        <div class="col-md-6"> <!--top left-->
          <div class="search-label">
            Mentoring Type
          </div>
          <label class="checkbox-inline">
            <input type="checkbox" id="inlineCheckbox1" value="Academic"> Academic
          </label>
          <label class="checkbox-inline">
            <input type="checkbox" id="inlineCheckbox2" value="Personal"> Personal
          </label>
          <label class="checkbox-inline">
            <input type="checkbox" id="inlineCheckbox3" value="Career"> Career
          </label>
        </div>

        <div class="col-md-6"> <!--top right-->
          <div class="search-label">
            UW Member Status
          </div>
          <label class="checkbox-inline">
            <input type="checkbox" id="inlineCheckbox1" value="Student"> Student
          </label>
          <label class="checkbox-inline">
            <input type="checkbox" id="inlineCheckbox2" value="Alumni"> Alumni
          </label>
          <label class="checkbox-inline">
            <input type="checkbox" id="inlineCheckbox3" value="Faculty"> Faculty
          </label>
        </div>
      </div>

      <hr style="margin-bottom:20px;margin-top:20px;"/>

      <div class="row"> <!--section 3-->
        <div class="col-sm-3">
          <div class="form-group">
            <div class="search-label">Language:</div>
            <select class="form-control" id="Language" name="Language">
              <option value="All languages" selected>All languages</option>
              <option value="English">English</option>
              <option value="French">French</option>
              <option value="Spanish">Spanish</option>
              <option value="Chinese">Chinese</option>
              <option value="Other">Other</option>
            </select>
          </div>
        </div>
        <div class="col-sm-3">
          <div class="form-group">
            <div class="search-label">Industry</div>
            <select class="form-control" id="Industry" name="Industry">
              <option value="All industries" selected>All industries</option>
              <option value="Automotive">Automotive</option>
              <option value="Business">Business</option>
              <option value="French">Health Care</option>
              <option value="Spanish">Science and Research</option>
              <option value="Chinese">Technology</option>
              <option value="French">Education</option>
              <option value="Spanish">Other</option>
              <option value="Chinese">None</option>
            </select>
          </div>
        </div>
        <div class="col-sm-3">
          <div class="form-group">
            <div class="search-label">Department</div>
            <select class="form-control" id="Department" name="Department">
              <option value="All departments" selected>All departments</option>
              <option value="Chemistry">Chemistry</option>
              <option value="Math">Math</option>
              <option value="Computer">Computer</option>
              <option value="Information">Information</option>
              <option value="Business">Business</option>
              <option value="Chemistry">Chemistry</option>
              <option value="Other">Other</option>
              <option value="None">None</option>
            </select>
          </div>
        </div>
      </div>
      <hr style="margin-bottom:20px;margin-top:20px;"/>

      </form>
      <div class="row"> <!--section 4-->
        <div class="col-md-4 col-md-offset-5">
          <button type="submit" class="btn btn-info"> Search </button>
        </div>
      </div>
      <hr style="margin-bottom:20px;margin-top:20px;"/>
    </div>

    <div class="container search-hidden">
      <div class="row"> <!--bottom row 1-->
        <div class="col-md-6 search-profile"> <!--row left-->
          <div class="row"> <!--pic/description row-->
          <div class="col-md-4"> <!-- persona left-->
            <a href="profile.php"><img src="http://students.washington.edu/xulizhou/info_capstone/final_version/images/profile/u282.jpg"
                alt="pc1" style="width:150px;height:180px;"/></a>
          </div>
          <div class="col-md-8"> <!--persona right-->
            <div class="row">
              <div class="col-md-6" style="color:#4b2e83;font-size:15pt;padding-top:8px;margin-bottom:20px;">
                <img src="http://metro.kingcounty.gov/up/spclevent/huskies/images/uw_logo.png"
                    alt="pc1" style="width:42px;height:29px;"/> Jeff Ma
              </div>
              <div class="col-md-6" style="color:#b7a57a;font-size:15pt;padding-top:8px;margin-bottom:20px;">
                5000 <img src="images/staricon.png"
                    alt="recommendations"/>
              </div>
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
              <div class="col-md-6"><strong>Location:</strong></div>
              <div class="col-md-6">Seattle</div>
            </div>
            <div class="row">
              <div class="col-md-6"><strong>Major:</strong></div>
              <div class="col-md-6">Informatics</div>
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
          </div> <!--close for pic/description row-->

          <div class="row"> <!--intro row-->
            <div style="text-muted;margin-top:10px;">
              I am currently a senior at the University of Washington
              in the informatics program. As a student I have struggled throughout
              my academic career. I never graduated from high school.......
            </div>
          </div> <!-- close for intro row-->
        </div> <!--close for row left-->

        <div class="col-md-6 search-profile"> <!--row right-->
          <div class="row"> <!--pic/description row-->
          <div class="col-md-4"> <!-- persona left-->
            <img src="images/johndoe.jpg"
                alt="pc1"/>
          </div>
          <div class="col-md-8"> <!--persona right-->
            <div class="row">
              <div class="col-md-6" style="color:#4b2e83;font-size:15pt;padding-top:8px;margin-bottom:20px;">
                <img src="http://metro.kingcounty.gov/up/spclevent/huskies/images/uw_logo.png"
                    alt="pc1" style="width:42px;height:29px;"/> John Doe
              </div>
              <div class="col-md-6" style="color:#b7a57a;font-size:15pt;padding-top:8px;margin-bottom:20px;">
                4 <img src="images/staricon.png"
                    alt="recommendations"/>
              </div>
            </div>

            <div class="row">
              <div class="col-md-6"><strong>UW status</strong></div>
              <div class="col-md-6">Faculty</div>
            </div>
            <div class="row">
              <div class="col-md-6"><strong>Language:</strong></div>
              <div class="col-md-6">English</div>
            </div>
            <div class="row">
              <div class="col-md-6"><strong>Location:</strong></div>
              <div class="col-md-6">Seattle</div>
            </div>
            <div class="row">
              <div class="col-md-6"><strong>Department:</strong></div>
              <div class="col-md-6">Chemistry</div>
            </div>
            <div class="row">
              <div class="col-md-6"><strong>Industry:</strong></div>
              <div class="col-md-6">Research</div>
            </div>
            <div class="row">
              <div class="col-md-6"><strong>Mentoring:</strong></div>
              <div class="col-md-6">Academic, Personal</div>
            </div>
          </div>
          </div> <!--close for pic/description row-->

          <div class="row"> <!--intro row-->
            <div style="text-muted;margin-top:10px;">
              I am currently an associate proffesor here at the University of 
              Washington and I love teaching. My students are the best. I am
              new to Mentour but am not new to teaching.......
            </div>
          </div> <!-- close for intro row-->
        </div> <!--close for row right-->
      </div>

      <div style="margin-bottom:30px;"></div>

      <div class="row"> <!--bottom row 2-->
        <div class="col-md-6 search-profile"> <!--row left-->
          <div class="row"> <!--pic/description row-->
          <div class="col-md-4"> <!-- persona left-->
            <img src="images/lucysky.jpg"
                alt="pc1"/>
          </div>
          <div class="col-md-8"> <!--persona right-->
            <div class="row">
              <div class="col-md-6" style="color:#4b2e83;font-size:15pt;padding-top:8px;margin-bottom:20px;">
                <img src="http://metro.kingcounty.gov/up/spclevent/huskies/images/uw_logo.png"
                    alt="pc1" style="width:42px;height:29px;"/> Lucy Sky
              </div>
              <div class="col-md-6" style="color:#b7a57a;font-size:15pt;padding-top:8px;margin-bottom:20px;">
                102 <img src="images/staricon.png"
                    alt="recommendations"/>
              </div>
            </div>

            <div class="row">
              <div class="col-md-6"><strong>UW status</strong></div>
              <div class="col-md-6">Alumni</div>
            </div>
            <div class="row">
              <div class="col-md-6"><strong>Language:</strong></div>
              <div class="col-md-6">English</div>
            </div>
            <div class="row">
              <div class="col-md-6"><strong>Location:</strong></div>
              <div class="col-md-6">Renton</div>
            </div>
            <div class="row">
              <div class="col-md-6"><strong>Major:</strong></div>
              <div class="col-md-6">Nursing</div>
            </div>
            <div class="row">
              <div class="col-md-6"><strong>Industry:</strong></div>
              <div class="col-md-6">Health Care</div>
            </div>
            <div class="row">
              <div class="col-md-6"><strong>Mentoring:</strong></div>
              <div class="col-md-6">Personal, Career</div>
            </div>
          </div>
          </div> <!--close for pic/description row-->

          <div class="row"> <!--intro row-->
            <div style="text-muted;margin-top:10px;">
              I graduated from the UW 10 years ago with a degree nursing.
              In my free time I like to hike and watch movies. I am a big 
              foodie and love trying new places to eat. I am looking to mentor.......
            </div>
          </div> <!-- close for intro row-->
        </div> <!--close for row left-->

        <div class="col-md-6 search-profile"> <!--row right-->
          <div class="row"> <!--pic/description row-->
          <div class="col-md-4"> <!-- persona left-->
            <img src="images/janapan.jpg"
                alt="pc1"/>
          </div>
          <div class="col-md-8"> <!--persona right-->
            <div class="row">
              <div class="col-md-6" style="color:#4b2e83;font-size:15pt;padding-top:8px;margin-bottom:20px;">
                <img src="http://metro.kingcounty.gov/up/spclevent/huskies/images/uw_logo.png"
                    alt="pc1" style="width:42px;height:29px;"/> Jana Pan
              </div>
              <div class="col-md-6" style="color:#b7a57a;font-size:15pt;padding-top:8px;margin-bottom:20px;">
                234 <img src="images/staricon.png"
                    alt="recommendations"/>
              </div>
            </div>

            <div class="row">
              <div class="col-md-6"><strong>UW status</strong></div>
              <div class="col-md-6">Faculty</div>
            </div>
            <div class="row">
              <div class="col-md-6"><strong>Language:</strong></div>
              <div class="col-md-6">English</div>
            </div>
            <div class="row">
              <div class="col-md-6"><strong>Location:</strong></div>
              <div class="col-md-6">Seattle</div>
            </div>
            <div class="row">
              <div class="col-md-6"><strong>Department:</strong></div>
              <div class="col-md-6">Computer Science</div>
            </div>
            <div class="row">
              <div class="col-md-6"><strong>Industry:</strong></div>
              <div class="col-md-6">Technology</div>
            </div>
            <div class="row">
              <div class="col-md-6"><strong>Mentoring:</strong></div>
              <div class="col-md-6">Academic, Career</div>
            </div>
          </div>
          </div> <!--close for pic/description row-->

          <div class="row"> <!--intro row-->
            <div style="text-muted;margin-top:10px;">
              I have been with the computer science department for
              over 5 years now. UW is like my home away from and 
              and I enjoy teaching my students. In my free time I
              like to read up on new technologies.......
            </div>
          </div> <!-- close for intro row-->
        </div> <!--close for row right-->
      </div>

      <div style="margin-bottom:30px;"></div>

       <div class="row"> <!--bottom row 3-->
        <div class="col-md-6 search-profile"> <!--row left-->
          <div class="row"> <!--pic/description row-->
          <div class="col-md-4"> <!-- persona left-->
            <img src="images/ronsour.jpg"
                alt="pc1"/>
          </div>
          <div class="col-md-8"> <!--persona right-->
            <div class="row">
              <div class="col-md-6" style="color:#4b2e83;font-size:15pt;padding-top:8px;margin-bottom:20px;">
                <img src="http://metro.kingcounty.gov/up/spclevent/huskies/images/uw_logo.png"
                    alt="pc1" style="width:42px;height:29px;"/> Ron Sour
              </div>
              <div class="col-md-6" style="color:#b7a57a;font-size:15pt;padding-top:8px;margin-bottom:20px;">
                67 <img src="images/staricon.png"
                    alt="recommendations"/>
              </div>
            </div>

            <div class="row">
              <div class="col-md-6"><strong>UW status</strong></div>
              <div class="col-md-6">Alumni</div>
            </div>
            <div class="row">
              <div class="col-md-6"><strong>Language:</strong></div>
              <div class="col-md-6">English</div>
            </div>
            <div class="row">
              <div class="col-md-6"><strong>Location:</strong></div>
              <div class="col-md-6">Bellevue</div>
            </div>
            <div class="row">
              <div class="col-md-6"><strong>Major:</strong></div>
              <div class="col-md-6">Informatics</div>
            </div>
            <div class="row">
              <div class="col-md-6"><strong>Industry:</strong></div>
              <div class="col-md-6">Technology</div>
            </div>
            <div class="row">
              <div class="col-md-6"><strong>Mentoring:</strong></div>
              <div class="col-md-6">Personal</div>
            </div>
          </div>
          </div> <!--close for pic/description row-->

          <div class="row"> <!--intro row-->
            <div style="text-muted;margin-top:10px;">
              I have a degree in Informatics and currently work for Microsoft
              as a software developer. I like geeky stuff and making cool
              things with my raspberry pi computer. My experience at the UW
              was awesome and.......
            </div>
          </div> <!-- close for intro row-->
        </div> <!--close for row left-->

        <div class="col-md-6 search-profile"> <!--row right-->
          <div class="row"> <!--pic/description row-->
          <div class="col-md-4"> <!-- persona left-->
            <img src="images/rexlink.jpg"
                alt="pc1"/>
          </div>
          <div class="col-md-8"> <!--persona right-->
            <div class="row">
              <div class="col-md-6" style="color:#4b2e83;font-size:15pt;padding-top:8px;margin-bottom:20px;">
                <img src="http://metro.kingcounty.gov/up/spclevent/huskies/images/uw_logo.png"
                    alt="pc1" style="width:42px;height:29px;"/> Rex Link
              </div>
              <div class="col-md-6" style="color:#b7a57a;font-size:15pt;padding-top:8px;margin-bottom:20px;">
                30 <img src="images/staricon.png"
                    alt="recommendations"/>
              </div>
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
              <div class="col-md-6"><strong>Location:</strong></div>
              <div class="col-md-6">Seattle</div>
            </div>
            <div class="row">
              <div class="col-md-6"><strong>Major:</strong></div>
              <div class="col-md-6">Physics</div>
            </div>
            <div class="row">
              <div class="col-md-6"><strong>Industry:</strong></div>
              <div class="col-md-6">None</div>
            </div>
            <div class="row">
              <div class="col-md-6"><strong>Mentoring:</strong></div>
              <div class="col-md-6">Personal</div>
            </div>
          </div>
          </div> <!--close for pic/description row-->

          <div class="row"> <!--intro row-->
            <div style="text-muted;margin-top:10px;">
              I am a senior at the University of Washington. I am originally
              from Portland and moved up here to attend class. Working on my
              bachelors degree in physics and I hope to stay in Seattle
              after graduating and find a job.......
            </div>
          </div> <!-- close for intro row-->
        </div> <!--close for row right-->
      </div>

      <div style="margin-bottom:30px;"></div>

      </div> <!--close for result section-->
    </div> <!--close for container-->
    <div class="col-xs-12" style="height:20px;"></div>
