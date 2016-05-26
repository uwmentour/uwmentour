'use strict';

/**
 * App initializer
 */
(function() {
  var layerSampleApp = window.layerSampleApp;
  layerSampleApp.initialize = function() {

    var titlebarView, conversationListView, conversationListHeaderView,
      userListView, activeConversation, conversationQuery,
      messageListView, messageComposerView, messagesQuery;

    /**
     * During initialization, create all of the views and setup event listeners
     * to handle user interaction events.
     */
    function initializeViews() {
      titlebarView = new layerSampleApp.Titlebar();
      titlebarView.render();

      conversationListView = new layerSampleApp.ConversationList();
      conversationListHeaderView = new layerSampleApp.ConversationListHeader();
      userListView = new layerSampleApp.UserListDialog();

        // Setup Message Views
      messageComposerView = new layerSampleApp.MessageComposer();
      messageListView = new layerSampleApp.MessageList();

      // When the user clicks the New Conversation button in the
      // Conversation List Header, call newConversation.
      conversationListHeaderView.on('conversations:new', function() {
        newConversation();
      });

      // When the user is in the User List Dialog and clicks to create a conversation,
      // call createConversation.
      userListView.on('conversation:created', function(participants) {
        createConversation(participants);
      });

        // Tutorial Step 5: Select Conversation listener
        // Tutorial Step 5: Select Conversation Event Handler
      conversationListView.on('conversation:selected', function (conversationId) {
          selectConversation(conversationId);
      });

        // When the user hits ENTER after typing a message this will trigger
        // to create a new message and send it.
      messageComposerView.on('message:new', function (text) {
          sendMessage(text);
      });
    }

    /**
     * During initialization we need to create the queries that will
     * download data from Layer's servers;
     * Also need to setup event handlers to rerender when the query
     * data changes.
     */
    function initializeQueries() {
        // Tutorial Step 3: Create Query here
        conversationQuery = layerSampleApp.client.createQuery({
            model: layer.Query.Conversation
        });
        conversationQuery.on('change', function () {
            conversationListView.render(conversationQuery.data);
        });

        // Tutorial Step 3: Setup the Message Query here
        // Tutorial Step 3: Setup the Message Query here
        messagesQuery = layerSampleApp.client.createQuery({
            model: layer.Query.Message
        });

        messagesQuery.on('change', function (e) {
            messageListView.render(messagesQuery.data);
        });


    }


    /**
     * Handle the user requesting to create a new conversation by showing the User List Dialog.
     */
    function newConversation() {
      userListView.show();
    }

    /**
     * Handle the user creating a Conversation from the User List Dialog.
     */
    function createConversation(participants) {
        // Tutorial Step 2: Create a Conversation
        var conversation = layerSampleApp.client.createConversation({
            participants: participants,
            distinct: true
        });
        selectConversation(conversation.id);
    }


    /**
     * Handle the user selecting a Conversation
     */
    function selectConversation(conversationId) {
        // Tutorial Step 5: Select a Conversation Handler
       

        // Get the Conversation instance associated with the selected Conversation ID
        var conversation = layerSampleApp.client.getConversation(conversationId);

        // Set our activeConversation state
        activeConversation = conversation;

        // Update the Conversation List to highlight the selected Conversation
        conversationListView.selectedConversation = conversation;
        conversationListView.render();
        titlebarView.render(conversation);

        // Tutorial Step 3: Update Mesage Query here
        messagesQuery.update({
            predicate: 'conversation.id = "' + conversationId + '"'
        });

    }

    function sendMessage(text) {
        // Tutorial Step 2: Send a message
        if (activeConversation) {
            var message = activeConversation.createMessage(text).send();
            message.on('messages:sent', function (evt) {
                console.log('Message was sent with text: ' + evt.target.parts[0].body);
            });
        }
    }


    // Initialize Everything:
    initializeViews();
    initializeQueries();
    //createConversation(['0', '1', '2', '3', '4', '5']);
  };
})();
