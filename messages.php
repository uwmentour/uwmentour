<!doctype html>
<html lang="en">
<head>
    <meta charset="utf-8">
    <title>Layer Chat tutorial</title>
    <meta name="description" content="Layer Chat tutorial">
    <!-- Styles -->
    <link href="https://fonts.googleapis.com/css?family=Open+Sans:300,400,600" rel="stylesheet" type="text/css">
    <link href="./css/messages.css" rel="stylesheet">
    <!-- Backbone and its Dependencies -->
    <script src='https://code.jquery.com/jquery-2.2.0.min.js'></script>
    <script src='https://cdnjs.cloudflare.com/ajax/libs/underscore.js/1.8.3/underscore-min.js'></script>
    <script src='https://cdnjs.cloudflare.com/ajax/libs/backbone.js/1.2.3/backbone-min.js'></script>
    <!-- Layer Web SDK -->
    <script src='https://cdn.layer.com/sdk/1.0/layer-websdk.min.js'></script>
    <!-- Step 1: Config -->
    <script>
    window.layerSampleConfig = {
        appId: 'layer:///apps/staging/90f98228-222f-11e6-a25e-59700300610c',
        userId: window.prompt('Please enter a user name', 'Tutorial User')
    };
    window.layerSampleApp = {};
    </script>
    <!-- Views -->
    <script src="./views/conversation-list.js"></script>
    <script src="./views/user-list-dialog.js"></script>
    <script src="./views/titlebar.js"></script>
    <script src="./views/conversation-list-header.js"></script>
    <script src="./views/message.js"></script>
    <script src="./views/message-list.js"></script>
    <script src="./views/message-composer.js"></script>
    <!-- Controllers and Utilities -->
    <script src="./js/controller.js"></script>    
    <script src="./js/index.js"></script>
    <script src="./js/identity-services.js"></script>
</head>
<body>
    <div class="messenger">
        <div class="user-list-dialog"></div>
        <div class="left-panel">
            <div class="panel-header conversations-header"></div>
            <div class="conversation-list"></div>
        </div>
        <div class="right-panel">
            <div class='conversation-header panel-header'></div>
            <div class="message-list"></div>
            <div class="message-composer"></div>
        </div>
    </div>
</body>
</html>
