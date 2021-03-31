function add_save_close_element_to_data_dict_func(data_dict_name, entry_name, entry_data)
%add_save_close_element_to_data_dict_func - this is a function to add an
%element, ave and close the data dictionary
% 
% data_dict_name -  string of data dictionary name, must include '.sldd' at
% the end
% entry_name - entry name string
% enry_data - data input

%% Add entry
dictionary_obj = Simulink.data.dictionary.open(data_dict_name );
data_section_obj = getSection(dictionary_obj,'Design Data');
addEntry(data_section_obj, entry_name, entry_data);

%% Save Changes
saveChanges(dictionary_obj);

%% Close
close(dictionary_obj);

end

