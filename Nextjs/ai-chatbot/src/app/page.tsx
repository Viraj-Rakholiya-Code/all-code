"use client";

import { Button } from "@/components/ui/button";
import { Input } from "@/components/ui/input";
import { useCompletion } from "ai/react";

export default function Completion() {
  const {
    completion,
    input,
    stop,
    isLoading,
    handleInputChange,
    handleSubmit,
  } = useCompletion({
    api: "/api/chat",
  });

  return (
    <div className="mx-auto w-full  py-24 flex flex-col px-20">
      <form onSubmit={handleSubmit}>
        <label>
          Say something...
          <div className="flex items-center space-x-2">
            <Input
              placeholder="Enter Something"
              className="w-full border border-gray-300 rounded shadow-xl p-2"
              value={input}
              onChange={handleInputChange}
            />
            <Button disabled={isLoading} type="submit">
              Send
            </Button>
          </div>
        </label>
        <br />
        <output>Completion result: {completion.toUpperCase()}</output>
      </form>
    </div>
  );
}
