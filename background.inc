@@ -0,0 +1,285 @@
<!--
  UW Mentour Project
  background page
  Dajia Bao
  Xuli zhou
  Jeff Ma
-->
  <div class="col-xs-12" style="height:50px;"></div>

  <div class="container" style="margin-top:50px;margin-bottom:50px;">
    <form action="/" method="post">
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
          </div>
        </div>
      
        <hr style="margin-bottom:10px;margin-top:10px;"/>
      
        <div style="color:#4b2e83;font-size:15pt;padding-top:5px;margin-bottom:5px;">
          About
        </div>
        <div class="form-group">
          <label>Please describe yourself:</label>
          <textarea class="form-control" rows="12" id="comment" placeholder="What kind of personality best describes you?  What are your interests?  What are your hobbies?  What should your ideal match know about you?"></textarea>
        </div>
          <hr style="margin-bottom:10px;margin-top:10px;"/>
          <div style="color:#4b2e83;font-size:15pt;padding-top:5px;margin-bottom:5px;">
            Background
        </div>
        <div class="row">
          <div class="col-md-6">
            <div class="form-group">
              <select class="form-control" id="Language" name="Language">
                <option value="UW status" selected>UW status</option>
                <option value="Alumni">Alumni</option>
                <option value="Faculty">Faculty</option>
                <option value="Student">Student</option>
              </select>
            </div>
            <div class="form-group">
              <select class="form-control" id="Language" name="Language">
                <option value="All languages" selected>Major</option>
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
              <select class="form-control" id="Language" name="Language">
                <option value="All languages" selected>Minor</option>
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
              <select class="form-control" id="Language" name="Language">
                <option value="All languages" selected>Year</option>
                <option value="English">Freshman</option>
                <option value="French">Sophomore</option>
                <option value="Spanish">Junior</option>
                <option value="Chinese">Senior</option>
                <option value="Other">Beyond senior</option>
              </select>
            </div>
            <div class="form-group">
              <input type="text" class="form-control" placeholder="Language">
            </div>
          </div>
          <div class="col-md-6">
            <div class="form-group">
              <input type="text" class="form-control" placeholder="Location">
            </div>
            <div class="form-group">
              <input type="text" class="form-control" placeholder="Degree">
            </div>
            <div class="form-group">
              <input type="text" class="form-control" placeholder="Occupation">
            </div>
            <div class="form-group">
              <input type="text" class="form-control" placeholder="Skills">
            </div>
          </div>
        </div>

          <hr style="margin-bottom:10px;margin-top:10px;"/>
          <div style="color:#4b2e83;font-size:15pt;padding-top:5px;margin-bottom:5px;">
            What are you looking for
          </div>
          <div class="form-group">
              <label>Please describe your ideal match:</label>
              <textarea class="form-control" rows="12" id="comment"></textarea>
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
          <button type="submit" class="btn btn-info"> Submit </button>
      </form>

    </div> <!--col-md-6 col-md-offset-3-->

  </div> <!--close for container-->